#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newn = new Node(val);
    if (head == NULL)
    {
        head = newn;
        tail = newn;
        return;
    }
    newn->next = head;
    head->prev = newn;
    head = newn;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newn = new Node(val);
    if (tail == NULL)
    {
        tail = newn;
        head = newn;
        return;
    }
    newn->prev = tail;
    tail->next = newn;
    tail = newn;
}
// এই function এর মাধ্যমে  যেকোনো given position থেকে value delete করা হবে।
// এখানে head এবং position নেয়া হচ্ছে parameter এ।
void delete_at_position(Node *head, int pos)
{
    Node *tmp = head; // temporary variable এ head রাখা হচ্ছে।

    for (int i = 1; i <= pos - 1; i++) // এই loop এর মাধ্যমে আমরা position অব্দি যাচ্ছি।
        {
            tmp = tmp->next;
        }
    Node *deleteNode = tmp->next; // একটা delete node এ যেই node করতে হবে সেটা রাখা হচ্ছে।
    tmp->next = tmp->next->next;  // delete node এর পরের value এর সাথে আগের value এর connection create করা হচ্ছে।
    tmp->next->prev = tmp;        // delete node এর পরের value এর previous এ আগের value রাখা হচ্ছে। 
    delete deleteNode;            // node টা delete করে দেয়া হচ্ছে memory level থেকে। এতে address টা পরবর্তী যেকোনো value এর জন্য memory address টা available থাকবে।
}

// এই function এর মাধ্যমে tail node এর value delete করা হচ্ছে।
// parameter এ head node এবং tail node এর address নেয়া হচ্ছে।
void delete_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail; // as it is del node create করা হচ্ছে
    tail = tail->prev;       // tail এ তার previous node রাখা হচ্ছে
    delete deleteNode;       // এর পর del node delete করে দেয়া হচ্ছে
    tail->next = NULL;
}

// head থেকে value delete করার process টাও tail এর মতো খালি variable গুলো opposite হবে।
void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}

void printin(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }
    delete_at_position(head,1);
    delete_head(head,tail);
    delete_tail(head,tail);
    printin(head);
    return 0;
}