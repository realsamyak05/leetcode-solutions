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
        return new Node(x);

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

bool isMirror(Node *a, Node *b)
{
    if (a == nullptr && b == nullptr)
        return true;

    if (a == nullptr || b == nullptr || a->data != b->data)
        return false;

    return isMirror(a->left, b->right) && isMirror(a->right, b->left);
}

bool isSymmetric(Node *root)
{
    if (root == nullptr)
        return true;

    return isMirror(root->left, root->right);
}

int main()
{
    int n;
    cout << "Enter number of nodes : ";
    cin >> n;

    Node *root = nullptr;

    cout << "Enter elements : ";

    while (n--)
    {
        int x;
        cin >> x;

        root = insertNode(root, x);
    }

    if (isSymmetric(root))
    {
        cout << "True\n";
    }

    else
    {
        cout << "False\n";
    }

    return 0;
}