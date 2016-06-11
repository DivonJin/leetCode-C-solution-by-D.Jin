/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// easy method
int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int i = max(maxDepth(root->left),maxDepth(root->right));
    return 1+i;
}

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

 //  use array method
int maxDepth(struct TreeNode* root) {
    struct TreeNode *qline[]={root};
    static int sum=1;//层数
    static int n=1;//这一层有几个节点
    checkdeeps(qline,sum,n);
    return sum;
}

void checkdeeps(struct TreeNode *line[],int sum,int n){
    struct TreeNode *queue[n*2];
    //int n = sizeof(line)/sizeof(struct TreeNode);
    int l=-1;
    for(int i=0;i<=n;i++){
        if(line[i]->left!=NULL){
            l++;
            queue[l] = line[i]->left;
        }
        else if(line[i]->right!=NULL){
            l++;
            queue[l] = line[i]->right;
        }
    }
    n=l;
    if(n>=0){
        sum=sum+1;
        checkdeeps(queue,sum,n);
    }
    else
        return;
}
