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

vector<vector<int>> bfs(Node *root)
{

    vector<vector<int>> v;

    if (root == nullptr)
        return v;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        vector<int> level;

        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();

            level.push_back(curr->data);

            if (curr->left != nullptr)
            {
                q.push(curr->left);
            }

            if (curr->right != nullptr)
            {
                q.push(curr->right);
            }
        }
        v.push_back(level);
    }
    return v;
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

    cout << "Level order traversal : ";

    vector<vector<int>> v = bfs(root);

    for (int i = 0; i < v.size(); i++)
    {
        vector<int> u = v[i];
        for (int j = 0; j < u.size(); j++)
        {
            cout << u[j] << " ";
        }
    }

    return 0;
}