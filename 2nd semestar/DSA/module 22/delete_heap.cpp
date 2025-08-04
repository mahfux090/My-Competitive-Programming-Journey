#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur = v.size() - 1;
    while (cur != 0)
    {
        int parent = (cur - 1) / 2;
        if (v[parent] < v[cur])
            swap(v[parent], v[cur]);
        else
            break;
        cur = parent;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int cur = 0;
    int last = v.size() - 1;
    while (true)
    {
        int left = cur * 2 + 1;
        int right = cur * 2 + 2;
        if (left <= last && right <= last)
        {
            if (v[left] >= v[right] && v[left] > v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else if (v[right] >= v[left] && v[right] > v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else break;
        }
        else if (left <= last)
        {
            if (v[left] > v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else break;
        }
        else if (right <= last)
        {
            if (v[right] > v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else break;
        }
        else break;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    for (int val : v)
        cout << val << " ";
    return 0;
}
