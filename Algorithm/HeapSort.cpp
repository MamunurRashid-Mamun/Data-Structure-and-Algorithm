#include<stdio.h>
void heapSort(int a[], int n);
void adjust(int a[], int i, int n);
void heapify(int a[], int n);
int a[100];
int main()
{
    int i, n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    heapSort(a,n);
    printf("Sorted form is: ");
    for(i=1; i<=n; i++)
        printf("%d ",a[i]);
    return 0;
}

void heapSort(int a[], int n)
{
    int i,t;
    heapify(a,n);
    for(i=n; i>=2; i--)
    {
        t=a[i];
        a[i]=a[1];
        a[1]=t;
        adjust(a,1,i-1);
    }
}

void heapify(int a[], int n)
{
    int i;
    for(i=n/2; i>=1; i--)
    {
        adjust(a,i,n);
    }
}

void adjust(int a[], int i, int n)
{
    int j, item;
    j=2*i;
    item=a[i];
    while(j<=n)
    {
        if(j<n&&a[j+1]>a[j])
        {
            j=j+1;
        }
        if(item>=a[j])
            break;
        a[j/2]=a[j];
        j=2*j;
    }
    a[j/2]=item;
}
