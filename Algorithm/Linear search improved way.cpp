#include<stdio.h>
int index;
int linearSearch(int a[], int n, int sval);
int main()
{
    int a[100], i, n, sval,found=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("enter element of array: ");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    printf("Enter search value: ");
    scanf("%d",&sval);
    found = linearSearch(a,n,sval);
    if(found == 1)
    {
        printf("value found in %d index\n",index-1);
    }
    else
    {
        printf("value not found");
    }
    return 0;
}

int linearSearch(int a[], int n, int sval)
{
    int i=1;
    index = -1;
    a[n+1] = sval;
    while(a[i] != sval)
    {
        i++;
    }

    if(a[i] == sval && i <= n)
    {
        index = i;
        return 1;
    }
    else
        return 0;
}
