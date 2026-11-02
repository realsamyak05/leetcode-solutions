#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

Node *insertNode(Node *root, int x)
{
    if (root == nullptr)
    {
        return new Node(x);
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr->left != nullptr)
        {
            q.push(curr->left);
        }
        else
        {
            curr->left = new Node(x);
            return root;
        }

        if (curr->right != nullptr)
        {
            q.push(curr->right);
        }
        else
        {
            curr->right = new Node(x);
            return root;
        }
    }
    return root;
}

bool isSame(Node *p, Node *q)
{
    if (p == nullptr && q == nullptr)
        return true;

    if (p == nullptr || q == nullptr || p->data != q->data)
        return false;

    return isSame(p->left, q->left) && isSame(p->right, q->right);
}

int main()
{
    int n;
    cout << "Enter number of elements in first tree : ";
    cin >> n;

    Node *p = nullptr;

    while (n--)
    {
        int x;
        cin >> x;
        p = insertNode(p, x);
    }

    int m;
    cout << "Enter number of elements in second tree : ";
    cin >> m;

    Node *q = nullptr;

    while (m--)
    {
        int x;
        cin >> x;
        q = insertNode(q, x);
    }

    if (isSame(p, q))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}