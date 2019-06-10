#include<stdio.h>
main(int argc, char const *argv[])
{
    int row,x=1,y=0,i=0;
    scanf("%d",&row);
    while (x <= row)
    {
        for(i = 1; i<=x ; i++)
        {
            printf("%d",x);
        }
        printf("\n");
        x++;
    }
    return 0;
}
