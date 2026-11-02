#include <iostream>
#include <vector>
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

vector<int> inorderVector;

vector<int> inorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return {};
    }

    inorderTraversal(root->left);
    inorderVector.push_back(root->data);
    inorderTraversal(root->right);

    return inorderVector;
}

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    Node *root = nullptr;

    cout << "Enter elements : ";

    while (n--)
    {
        int x;
        cin >> x;

        root = insertNode(root, x);
    }

    vector<int> v = inorderTraversal(root);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}