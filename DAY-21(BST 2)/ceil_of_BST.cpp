/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=INT_MAX;
    while(node){
        if(x>node->data){
             
            node = node->right;
        }
//         else if(x==node->data){
//             return node->data;
//         }
        else 
        {
          ans = node->data;
          node= node->left;

        }
        
    }
    if(ans==INT_MAX) return -1;
    return ans;
}