#include<stdio.h>
void preorder(int tree[], int root);
int main()
{
    int a[] = {0,7,6,10,4,-1,8,13,3,5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    preorder(a,1);
    return 0;
}

void preorder(int tree[], int root)
{
    if(tree[root] != -1)
    {

        printf("%d ",tree[root]);

        preorder(tree, 2*root);

        preorder(tree, 2*root+1);
    }
}
