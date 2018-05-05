#include<stdio.h>
int a[100];
void mergeSort(int low, int high);
void mrg(int low, int mid, int high);
int main()
{
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    mergeSort(1,n);
    printf("Sorted form is: ");
    for(i=1; i<=n; i++)
        printf("%d ",a[i]);
    return 0;
}

void mergeSort(int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(1,mid);
        mergeSort(mid+1,high);
        mrg(low, mid, high);
    }
}

void mrg(int low, int high, int mid)
{
    int h,i,j,b[100];
    h=low, i=low,j=mid+1;
    while(h<=mid&&j<=high)
    {
        if(a[h]<=a[j])
        {
            b[i] = a[h];
            h=h+1;
        }
        else
        {
            b[i] = a[j];
            j=j+1;
        }
        i=i+1;
    }
    if(h>mid)
    {
        for(int k = j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(int k = h; k<=mid; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(i=low; i<=high; i++)
        a[i] = b[i];
}
