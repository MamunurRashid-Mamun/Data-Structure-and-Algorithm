#include<stdio.h>
int square[100][100];
void magicSquare(int n);
int main()
{
    int a[100][100], i, j, n;
    printf("Enter the size of array(n*n): ");
    scanf("%d",&n);
    if(n%2 == 0)
        printf("n is even.\n");
    else
    {
        magicSquare(n);
        printf("magic square is:\n");
        for(i = 0; i<n; i++)
        {
            for(j = 0; j<n; j++)
            {
                printf("%-4d",square[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

void magicSquare(int n)
{
    int i,j,k,l,key;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            square[i][j] = 0;
        }
    }

    square[0][(n-1)/2] = 1;
    i = 0;
    j = (n-1)/2;
    for(key = 2; key <= n*n; key++)
    {
        if(i >= 1)
            k = i-1;
        else
            k = n-1;
        if(j >= 1)
            l = j-1;
        else
            l = n-1;
        if(square[k][l] >= 1)
            i = (i+1) % n;
        else
        {
            i = k;
            j = l;
        }
        square[i][j] = key;
    }

}
