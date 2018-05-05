#include<stdio.h>
int main()
{
    int arr[50],i,j,temp,n,position;
    printf("Enter number of number: ");
    scanf("%d",&n);
    printf("Enter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }

    }
    printf("Sorted form is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

