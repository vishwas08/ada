#include<stdio.h>
void DFS(int);
int a[10][10],vis[10],n;
void main()
{

    int i,j;
    printf("\nEnter no of vertices");
    scanf("%d",&n);
    printf("\nEnter adjacent matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;i++)
        {

            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
        vis[i]=0;
    printf("\nEnter DFS traversal");
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        DFS(i);
    }
    connect();
    getch();        //DFS(i);
}
void connect()
{

    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            printf("\nNot Connected\n");
            return;
        }
    }
    printf("\nConnected");
}


void DFS(int v)
{

    int i;
    vis[v]=1;
    printf("\n%d",v);
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1&&vis[i]==0)
            DFS(i);
    }
}
