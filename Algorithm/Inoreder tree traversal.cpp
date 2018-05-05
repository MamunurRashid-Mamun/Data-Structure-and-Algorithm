#include<stdio.h>
void inorder(int tree[], int root);
int main()
{
    //this is array representation of a binary tree
    int a[] = {0,7,6,10,4,-1,8,13,3,5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    inorder(a,1);
    return 0;
}

void inorder(int tree[], int root)
{
    if(tree[root] != -1)
    {

        inorder(tree, 2*root);

        printf("%d ",tree[root]);

        inorder(tree, 2*root+1);

    }

}
