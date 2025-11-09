// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BST_input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *fr = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *newLeft, *newRight;
        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);
        if (r == -1)
            newRight = NULL;
        else
            newRight = new Node(r);

        fr->left = newLeft;
        fr->right = newRight;

        if (newLeft)
            q.push(newLeft);
        if (newRight)
            q.push(newRight);
    }
    return root;
}

void print(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout << p->val << " ";
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    cout << "\nPrinted\n";
}
void InorderTr(Node *root)
{
    if (root == NULL)
        return;
    InorderTr(root->left);
    cout << root->val << " ";
    InorderTr(root->right);
}
int main()
{

    Node *root = BST_input();
    print(root);

    InorderTr(root);
    return 0;
}