 Print Tree level wise
Moderate
Score
120/160
Average time to solve is 40m
Problem statement
Send feedback

Given a generic tree, print the input tree in level wise order.

For printing a node with data N, you need to follow the exact format -

N:x1,x2,x3,...,xn
where, N is data of any node present in the generic tree. x1, x2, x3, ...., xn are the children of node N. Note that there is no space in between.


You need to print all nodes in the level order form in different lines.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
0 <= Data of a node <= 10^5

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 


Sample Output 1:
10:20,30,40
20:40,50
30:
40:
40:
50:

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}
#include<queue>
void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        TreeNode<int>* front = pendingnodes.front();
        cout<<front->data<<":";
        pendingnodes.pop();
        for(int i=0;i<front->children.size();i++){
            pendingnodes.push(front->children[i]);
            if(i==front->children.size()-1){
                cout<<front->children[i]->data;
            }
            else{
                cout<<front->children[i]->data<<",";
            }
        }
        cout<<endl;
    }
}
int main() {
    TreeNode<int>* root = takeInputLevelWise();
    printLevelWise(root);
}
