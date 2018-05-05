#include<stdio.h>
int main()
{
    int i,j,k,l,sum,mul,rA,cA,rB,cB,A[100][100],B[100][100],AB[100][100];
    printf("Enter Row and Column of first matrix: ");
    scanf("%d %d",&rA,&cA);
    printf("Enter Row and Column of second matrix: ");
    scanf("%d %d",&rB,&cB);
    if(cA!=rB)
        printf("\nMatrix multiplication is not possible.\n");
    else
    {
        printf("Enter elements of first matrix:\n");
        for(i=0; i<rA; i++)
        {
            for(j=0; j<cA; j++)
                scanf("%d",&A[i][j]);
        }

        printf("Enter elements of second matrix:\n");
        for(i=0; i<rB; i++)
        {
            for(j=0; j<cB; j++)
                scanf("%d",&B[i][j]);
        }

        for(k=0; k<rA; k++)
        {
            for(i=0; i<cB; i++)
            {
                sum=0;
                for(j=0; j<cA; j++)
                {
                    mul=A[k][j]*B[j][i];
                    sum=sum+mul;
                }
                AB[k][i]=sum;
            }
        }

        printf("\nMultiplication is:\n\n");
        for(i=0; i<rA; i++)
        {
            for(j=0; j<cB; j++)
            {
                printf("%4d",AB[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
