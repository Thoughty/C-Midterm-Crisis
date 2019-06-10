#include<stdio.h>
int main()
{
    int n,i,k,prime=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(k=1;k<n;k++)
        {
            if(i%k == 0)
                {
                    prime++;
                }
        
        }
        if(prime == 2)
        {
            printf("%d ",i);
        }
        prime=0;
    }
    return 0;
}
