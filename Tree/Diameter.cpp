#include<bits/stdc++.h>
using namespace std;

// time complexity = o(n^2)

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

// int calHeight(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int lheight = calHeight(root->left);
//     int rHeight = calHeight(root->right);
//     return max(lheight, rHeight)+1;
// }

// int calDiameter(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int lHeight = calHeight(root->left);
//     int rHeight = calHeight(root->right);

//     int currDiameter =  lHeight + rHeight +1;
//     int lDiameter = calDiameter(root->left);
//     int rDiameter = calDiameter(root->right);

//     return max(currDiameter, max(lDiameter, rDiameter));
// }

// Optimize approach; o(n);

int calDiameter(Node* root, int* height){
    if(root == NULL){
        *height =0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lDiameter = calDiameter(root ->left,&lh);
    int rDiameter = calDiameter(root ->right, &rh);

    int currDiameter = lh+rh+1;
    *height = max(lh,rh) +1;

    return max(currDiameter, max(lDiameter, rDiameter));
}


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right= new Node(7);
    int height  =0;
    cout<<calDiameter(root, &height)<<"\n";
    return 0;
}