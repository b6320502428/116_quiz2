#include <stdio.h>
#include <string.h>
int main ()
{
    long long int n,i,j,ans=0;
    char str[7]="";
    scanf("%lld",n);
    for(i=1;i<=n;i++)
    {
        if(i>0&&i<10)
        {
            ans++;
        }
    }
    return 0;
}
