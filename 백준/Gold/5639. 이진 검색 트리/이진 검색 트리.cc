#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

struct Node
{
    int num;
    Node* leftChild;
    Node* rightChild;
};

void Child(Node* node)
{
    if (node == nullptr)
        return;
    Child(node->leftChild);
    Child(node->rightChild);
    cout << node->num << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    cin >> input;
    Node* root = new Node;
    root->num = input;

    while (cin >> input)
    {
        Node* target = root;
        Node* newNode = new Node();
        newNode->num = input;
        while (true)
        {
            if (target->num > input) // 새 노드가 더 작을 때
            {
                if (target->leftChild == nullptr)
                {
                    target->leftChild = newNode;
                    break;
                }
                else
                    target = target->leftChild;

            }
            else // 새 노드가 더 작을 때
            {
                if (target->rightChild == nullptr)
                {
                    target->rightChild = newNode;
                    break;
                }
                else
                    target = target->rightChild;
            }
        }
    }

    Child(root);
}