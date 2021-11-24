#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node*left;
	struct Node*right;
	Node(int val){
	data=val;
	left =NULL;
	right=NULL;
}
};
void printlevelorder(Node*root)
{
    if(root==NULL)
    return;
queue<Node*>q;
q.push(root);
q.push(NULL);
while(!q.empty())
{
    Node*node=q.front();
    q.pop();
    if(node!=NULL)
    {
        cout<<node->data<<" ";
        if(node->left)
        q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
    else if (!q.empty())
    q.push(NULL);
    }
}
int main()
{
    
 struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    printlevelorder(root);
    return 0;
}
// 1 2 3 4 5
//sum at the k th level of binary tree
