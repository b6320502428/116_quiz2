#include <stdio.h>
int main ()
{
    int n,m,i,p,q,r,j;
    scanf("%d %d",&m,&n);
    char cloth[m][70];
    for(i=0; i<m; i++)
    {
        for(j=0; j<70; j++)
        {
            cloth[i][j]='o';
        }
    }
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&p,&q,&r);
    }
    return 0;
}
