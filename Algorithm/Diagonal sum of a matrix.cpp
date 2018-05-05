#include<stdio.h>
int main()
{
    int sum=0, a[50][50], i, j, n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    printf("Enter element of matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                sum = sum + a[i][j];
            if((i+j) == (n-1))
                sum = sum + a[i][j];
        }
    }

    if(n%2 != 0)
        sum = sum - a[(n/2)][(n/2)];
    printf("Summation of diagonal of matrix is: %d",sum);

    return 0;
}
