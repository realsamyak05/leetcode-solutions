#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};

Node *insert(Node *root, int x)
{
    if (root == nullptr)
    {
        root = new Node(x);
        return root;
    }

    if (x < root->data)
    {
        root->left = insert(root->left, x);
    }

    else if (x > root->data)
    {
        root->right = insert(root->right, x);
    }

    return root;
}

void inorder(Node *root, vector<int> &v)
{
    if (root == nullptr)
        return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int KthSmallest(Node *root, int k)
{
    vector<int> v;
    inorder(root, v);
    return v[k - 1];
}
int main()
{
    int n;
    Node *root = nullptr;
    cout << "Enter number of elements : ";
    cin >> n;
    cout << "Enter elements in BST : ";
    while (n--)
    {
        int x;
        cin >> x;

        root = insert(root, x);
    }

    int k;
    cout << "Enter k : ";
    cin >> k;

    int ans = KthSmallest(root, k);

    cout << "Answer : " << ans;

    return 0;
}