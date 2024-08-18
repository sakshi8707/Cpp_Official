#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode() {
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int data, TreeNode* left, TreeNode* right) {
        this->data = data;
        this->left = left;  
        this->right = right;
    }
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftNodeCnt = minDepth(root->left);
        int rightNodeCnt = minDepth(root->right);
        if (leftNodeCnt == 0 || rightNodeCnt == 0) {
            // If either subtree is empty, consider the non-empty one
            return 1 + max(leftNodeCnt, rightNodeCnt);
        }
        return 1 + min(leftNodeCnt, rightNodeCnt);
    }
};

int main() {
    TreeNode* root = nullptr;
    queue<TreeNode*> nodeQueue;

    int data;
    cin >> data;
    root = new TreeNode(data);
    nodeQueue.push(root);

    while (!nodeQueue.empty()) {
        TreeNode* currentNode = nodeQueue.front();
        nodeQueue.pop();

        int leftData, rightData;

        cout << "Enter the left child value of " << currentNode->data << " (-1 for no left child): ";
        cin >> leftData;
        if (leftData != -1) {
            currentNode->left = new TreeNode(leftData);
            nodeQueue.push(currentNode->left);
        }

        cout << "Enter the right child value of " << currentNode->data << " (-1 for no right child): ";
        cin >> rightData;
        if (rightData != -1) {
            currentNode->right = new TreeNode(rightData);
            nodeQueue.push(currentNode->right);
        }
    }

    Solution solution;
    int minDepth = solution.minDepth(root);
    cout << "Minimum depth of the binary tree is: " << minDepth << endl;

    return 0;
}
