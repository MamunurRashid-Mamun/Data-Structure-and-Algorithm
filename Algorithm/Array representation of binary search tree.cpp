#include<stdio.h>
#include<math.h>
#define SIZE 500
void binarySearchTree(int tree[], int sizeOfArray, int data, int root);
void preorder(int tree[], int root)
{
    if(tree[root] != -1)
    {

        printf("%d ",tree[root]);

        preorder(tree, 2*root);

        preorder(tree, 2*root+1);
    }
}

int main()
{
    int arr[500],i,j,n;
    int binaryArray[SIZE];
    printf("Enter number of element: ");
    scanf("%d",&n);
    printf("Enter data element: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<SIZE; i++)
        binaryArray[i] = -1;
    for(i=0; i<n; i++)
    {
        binarySearchTree(binaryArray, SIZE, arr[i], 1);
    }
    printf("Elements of binary array is: ");
    for(i=1; i<100; i++)
    {
        printf("%d ",binaryArray[i]);
    }

    printf("\nIn preorder: \n");
    preorder(binaryArray,1);
    return 0;
}

void binarySearchTree(int tree[], int sizeOfArray, int data, int root)
{

    if(root>=sizeOfArray)
        return;
    else if(tree[root] == -1)
        tree[root] = data;
    else if(data<tree[root])
        binarySearchTree(tree, sizeOfArray, data, 2*root);
    else
        binarySearchTree(tree, sizeOfArray, data, 2*root+1);
}
