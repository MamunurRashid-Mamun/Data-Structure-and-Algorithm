#include<stdio.h>
void selectionSort(int a[], int n);
int main()
{
    int a[100], i, j, n;
    printf("Enter number of element: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    selectionSort(a,n);
    printf("sorted elements are: ");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}

void selectionSort(int a[], int n)
{
    int i,j,temp,p;
    for(i=0; i<n; i++)
    {
        p = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[p])
            {
                p = j;
            }
        }
        temp = a[i];
        a[i] = a[p];
        a[p] = temp;
    }
}

