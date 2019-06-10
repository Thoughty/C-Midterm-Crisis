#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y,sum=0;
    printf("Input the number of the elements in array : ");
    scanf("%d",&x);
    int num[x];
    for(int i=0;i<=x-1;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("%d",sum);
    

    return 0;
}
