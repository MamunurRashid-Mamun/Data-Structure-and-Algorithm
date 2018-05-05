#include<stdio.h>
void postorder(int tree[], int root);
int main()
{
    // a[] is the binary try in array representation
    int a[] = {0,7,6,10,4,-1,8,13,3,5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    postorder(a,1);
    return 0;
}

void postorder(int tree[], int root)
{
    if(tree[root] != -1)
    {

        postorder(tree, 2*root);

        postorder(tree, 2*root+1);

        printf("%d ",tree[root]);
    }

}
