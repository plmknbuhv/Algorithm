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
    int x;
    int y;
    Node* leftChild;
    Node* rightChild;
};

vector<vector<int>> answer(2);

void Check(Node* node)
{
    answer[0].push_back(node->num);
    if (node->leftChild != nullptr)
        Check(node->leftChild);
    if (node->rightChild != nullptr)
        Check(node->rightChild);
    answer[1].push_back(node->num);
}

bool cmp(const Node* a, const Node* b) {
    if (a->y == b->y) return a->x < b->x;
    return a->y > b->y;
}

vector<vector<int>> solution(vector<vector<int>> nodeinfo)
{
    int n = nodeinfo.size();
    vector<Node*> nodes;
    Node* root;

    for (int i = 0; i < n; i++)
    {
        Node* node = new Node;
        node->num = i + 1;
        node->x = nodeinfo[i][0];
        node->y = nodeinfo[i][1];
        node->leftChild = nullptr;
        node->rightChild = nullptr;

        nodes.push_back(node);
    }

    sort(nodes.begin(), nodes.end(), cmp);
    root = nodes[0];

    for (Node* n : nodes)
    {
        if (n == root)
            continue;

        Node* target = root;
        while (true)
        {
            if (n->x < target->x) // 왼쪽
            {
                if (target->leftChild != nullptr)
                    target = target->leftChild;
                else
                {
                    target->leftChild = n;
                    break;
                }
            }
            else // 오른쪽
            {
                if (target->rightChild != nullptr)
                    target = target->rightChild;
                else
                {
                    target->rightChild = n;
                    break;
                }
            }
        }
    }

    Check(root);

    return answer;
}