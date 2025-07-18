def min_cost_to_equal(a, b, x, y):
    # If a and b have different parities and we can't change parity
    if a % 2 != b % 2 and y == float('inf'):
        return -1
    
    # If they're equal, no cost needed
    if a == b:
        return 0
    
    # For small numbers, we can try BFS to find minimum cost
    from collections import deque
    max_val = max(a, b) + 100  # Reasonable upper bound
    dist = {a: 0}
    queue = deque([a])
    
    while queue:
        curr = queue.popleft()
        curr_cost = dist[curr]
        
        # Try increment operation
        next_val = curr + 1
        if next_val <= max_val:
            new_cost = curr_cost + x
            if next_val not in dist or new_cost < dist[next_val]:
                dist[next_val] = new_cost
                queue.append(next_val)
        
        # Try XOR operation
        next_val = curr ^ 1
        new_cost = curr_cost + y
        if next_val not in dist or new_cost < dist[next_val]:
            dist[next_val] = new_cost
            queue.append(next_val)
        
        # If we reached b, we might continue if there's a chance for better cost
        if curr == b:
            # Process a few more steps to ensure minimum cost
            for _ in range(100):  # Limited extra steps
                if not queue:
                    break
                curr = queue.popleft()
                curr_cost = dist[curr]
                
                next_val = curr + 1
                if next_val <= max_val:
                    new_cost = curr_cost + x
                    if next_val not in dist or new_cost < dist[next_val]:
                        dist[next_val] = new_cost
                        queue.append(next_val)
                
                next_val = curr ^ 1
                new_cost = curr_cost + y
                if next_val not in dist or new_cost < dist[next_val]:
                    dist[next_val] = new_cost
                    queue.append(next_val)
    
    return dist.get(b, -1)

# Read number of test cases
t = int(input())
for _ in range(t):
    a, b, x, y = map(int, input().split())
    print(min_cost_to_equal(a, b, x, y))