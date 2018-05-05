#include<stdio.h>
void MaxMin(int i, int j);
int a[100];
int mx, mn;
int main()
{
    int i,j,n;
    printf("Enter number of element: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    MaxMin(0,n-1);
    printf("Maximum is: %d\nMinimum is: %d",mx,mn);
}

void MaxMin(int i, int j)
{
    int mid, mx1, mn1;
    if(i==j)
    {
        mx = a[i];
        mn = a[i];
    }
    else if(i == j-1)
    {
        if(a[i]>a[j])
        {
            mx = a[i];
            mn = a[j];
        }
        else
        {
            mx = a[j];
            mn = a[i];
        }
    }
    else
    {
        mid = (i+j)/2;
        MaxMin(i, mid);
        mx1 = mx;
        mn1 = mn;
        MaxMin(mid+1, j);
        if(mx1>mx)
            mx = mx1;
        if(mn1<mn)
            mn = mn1;
    }
}
