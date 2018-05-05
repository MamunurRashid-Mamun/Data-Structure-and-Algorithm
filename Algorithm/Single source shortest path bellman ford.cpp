#include<stdio.h>
void bellmanford(int n,int v);
int cost[10][10];
int dist[20];
main()
{
    int i,j,n,v;
    printf("enter the no of vertices: ");
    scanf("%d",&n);
    printf("Enter the costs of edges in matrix form:\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            scanf("%d",&cost[i][j]);
   /* for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            printf("%d",cost[i][j]);*/

    printf("Enter the source vertex:");
    scanf("%d",&v);
    bellmanford(n,v);
    for(i=1; i<=n; i++)
        printf("%d-->",dist[i]);
}
void bellmanford(int n,int v)
{
    int i,j,k;
    for(i=1; i<=n; i++)
        dist[i]=cost[v][i];
    for(k=2; k<=n-1; k++)
    {
        for(int u=1; u<=n; u++)
        {
            if(u==v)
                continue;
            for(i=1; i<=n; i++)
            {
                if(i==v)
                    continue;
                if(dist[u]>dist[i]+cost[i][u])
                    dist[u]=dist[i]+cost[i][u];
            }
        }
    }
}
