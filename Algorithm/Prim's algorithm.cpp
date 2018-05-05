#include<stdio.h>
int a,b,c,d,cost[100][100],visited[100]= {0},edge=1,mn,mincost=0;
int main()
{
    int i,j,n;
    printf("Enter the number of vertex: ");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            {
                cost[i][j] = 9999;
            }
        }
    }
    visited[1]=1;
    while(edge<n)
    {
        for(i=1,mn=9999; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(cost[i][j]<mn)
                {
                    if(visited[i]!=0)
                    {
                        mn = cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }
        if(visited[a]==0||visited[b]==0)
        {
            edge++;
            printf("\n(%d %d) : %d",a,b,mn);
            mincost+=cost[a][b];
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\nMincost is: %d",mincost);
    return 0;
}
