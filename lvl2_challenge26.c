#include <stdio.h>
int main()
{
    int n,m,A[101][101],P[101][101],c=0,k,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    scanf("%d",&P[i][j]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&A[i][j]);
            if(A[i][j]!=0) c++;
        }
    }
    printf("%d\n",c);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(A[i][j]!=0)
            {
                k=P[i][j]-A[i][j];
                printf("%d %d %d %d %d\n",i,j,i,j,k);
            }
        }
    }
          return 0;
}
