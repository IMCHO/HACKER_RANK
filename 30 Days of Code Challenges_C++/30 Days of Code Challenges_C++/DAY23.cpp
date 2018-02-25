#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node {
public:
	int data;
	Node *left, *right;
	Node(int d) {
		data = d;
		left = right = NULL;
	}
};
class Solution {
public:
	Node * insert(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}
		else {
			Node* cur;
			if (data <= root->data) {
				cur = insert(root->left, data);
				root->left = cur;
			}
			else {
				cur = insert(root->right, data);
				root->right = cur;
			}
			return root;
		}
	}

	void levelOrder(Node * root) {
		//Write your code here
		queue<Node*> my_que;

		if (root) my_que.push(root);
		while (!my_que.empty())
		{
			Node * temp = my_que.front();
			my_que.pop();
			cout << temp->data << " ";
			if (temp->left) my_que.push(temp->left);
			if (temp->right) my_que.push(temp->right);
		}

	}

};//End of Solution
int main() {
	Solution myTree;
	Node* root = NULL;
	int T, data;
	cin >> T;
	while (T-->0) {
		cin >> data;
		root = myTree.insert(root, data);
	}
	myTree.levelOrder(root);
	return 0;
}