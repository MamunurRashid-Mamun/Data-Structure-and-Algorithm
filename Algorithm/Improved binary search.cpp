#include<stdio.h>
#define INFINITY 10000000;
bool Binary_search(int A[1000], int n, int sval);

int main()
{
    int arr[100],n,sval;
    bool is_found;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&sval);
    is_found = Binary_search(arr, n, sval);
    if(is_found == true)
        printf("Value found");
    else
        printf("Value not found");
    return 0;
}

bool Binary_search(int A[1000], int n, int sval)
{
    int index = -1, low = 1, high = n+1, mid;
    A[high] = sval;

    while(low<high)
    {
        mid = (low + high)/2;
        if(A[mid] < sval)
            low = mid + 1;
        else
            high = mid;

    }
    if(A[high] == sval && high<=n)
        return true;
    else
        return false;
}
