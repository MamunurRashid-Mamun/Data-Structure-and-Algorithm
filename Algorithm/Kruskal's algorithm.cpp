#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],visited[9];
int find(int);
int uni(int,int);
int main()
{

    printf("\nEnter the no. of vertices\n");
    scanf("%d",&n);
    printf("\nEnter the cost adjacency matrix\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }
    printf("\nThe edges of Minimum Cost Spanning Tree are\n\n");
    while(ne<n)
    {
        for(i=1,min=999; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        while(visited[u]!=0)
        {
            u = visited[u];
        }

        while(visited[v]!=0)
        {
            v = visited[v];
        }
        if(u!=v)
        {
            ne++;
            printf("\n(%d %d) : %d",a,b,min);
            mincost+=cost[a][b];
            visited[b]=a;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\nMinimum cost = %d\n",mincost);
}
