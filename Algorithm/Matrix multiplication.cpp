#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], ab[100][100], sum, i, j, k, l, rA, cA, rB, cB;
    printf("Enter number of row and column of matrix A: ");
    scanf("%d %d",&rA,&cA);
    printf("Enter number of row and column of matrix B: ");
    scanf("%d %d",&rB,&cB);
    if(cA != rB)
    {
        printf("Matrix multiplication is not possible.\n");
    }
    else
    {
        printf("Enter element of matrix A:\n");
        for(i = 0; i<rA; i++)
            for(j=0; j<cA; j++)
                scanf("%d",&a[i][j]);
        printf("Enter element of matrix B:\n");
        for(i = 0; i<rB; i++)
            for(j=0; j<cB; j++)
                scanf("%d",&b[i][j]);

        ///multiplication starts here

        for(k=0; k<rA; k++) //row of first matrix
        {
            for(i=0; i<cB; i++) //column of second matrix
            {
                sum=0;
                for(j=0; j<rA; j++)
                    sum=sum+a[k][j]*b[j][i];
                ab[k][i]=sum;
            }
        }

        printf("Multiplication of matrix is:\n");
        for(i=0; i<rA; i++)
        {
            for(j=0; j<cB; j++)
            {
                printf("%d  ",ab[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
