#include <stdio.h>
#include <string.h>
int main ()
{
    long long int n,i,j,k,c,cc,ans=0;
    char str[7]="";
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        if(i>0&&i<10)
        {
            ans++;
        }
        else
        {
            sprintf(str,"%lld",i);
            //printf("str = %s\n",str);
            c=strlen(str)/2;
            cc=0;
            //printf("c = %lld\n",c);
            for(j=0;j<strlen(str)/2;j++)
            {
                k=strlen(str)-1-j;
                if(str[j]==str[k])
                {
                    cc++;
                }
            }
            //printf("cc = %lld\n",cc);
            if(c==cc)
            {
                ans++;
            }
        }
        strcpy(str,"");
    }
    printf("%lld",ans);
    return 0;
}
