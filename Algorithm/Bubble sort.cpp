#include<stdio.h>
void bubbleSort(int a[], int n);
int main()
{
    int a[100], i, j, n;
    printf("Enter number of element: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    bubbleSort(a,n);
    printf("sorted elements are: ");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}

void bubbleSort(int a[], int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
