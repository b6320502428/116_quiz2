#include <stdio.h>
int main ()
{
    int i,j,k=0;
    long long int n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        j=2;
        while(j*j*j<i)
        {
            if(i%(j*j*j)==0)
            {
                break;
            }
            j++;
        }
        if(i%(j*j*j)!=0)
        {
            k++;
        }
    }
    if(n%(j*j*j)!=0)
    {
        printf("%d",k);
    }
    else
    {
        printf("Not Cube Free");
    }
    return 0;
}
