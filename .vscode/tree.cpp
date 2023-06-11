#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;
    TreeNode(T data)
    {
        this->data = data;
    }
    static TreeNode<int> *takeInputLevelWise()
    {
        int rootData;
        cout << "Enter root data: ";
        cin >> rootData;
        TreeNode<int> *root = new TreeNode<int>(rootData);
        queue<TreeNode<int> *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode<int> *f = q.front();
            q.pop();
            cout << "Enter the number of children for " << f->data << ": ";
            int n;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                int childData;
                cout << "Enter the " << i + 1 << "th child of " << f->data << ": ";
                cin >> childData;
                TreeNode<int> *child = new TreeNode<int>(childData);
                q.push(child);
                f->children.push_back(child);
            }
        }
        return root;
    }
    static void printTree(TreeNode<int> *root)
    {
        if (root == NULL)
        {
            return;
        }
        queue<TreeNode<int> *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode<int> *f = q.front();
            q.pop();
            cout << f->data << ": ";
            for (int i = 0; i < f->children.size(); i++)
            {
                cout << f->children[i]->data;
                if (i != f->children.size() - 1)
                {
                    cout << ", ";
                }
                q.push(f->children[i]);
            }
            cout << endl;
        }
    }
};

int main()
{
    TreeNode<int> *root = TreeNode<int>::takeInputLevelWise();
    TreeNode<int>::printTree(root);
    cout << "Printing Level wise" << endl;
    return 0;
}