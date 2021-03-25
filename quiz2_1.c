#include <stdio.h>
int main ()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=2;
        while(j*j*j<i)
        {
            j++;
            if(i%(j*j*j)!=0)
            {
                break;
            }
        }
        if(i%(j*j*j)!=0)
        {
            k++;
        }
    }
    return 0;
}
