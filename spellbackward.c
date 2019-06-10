#include<stdio.h>
main(int argc, char const *argv[])
{
    int i,o;
    char alpha[5];
    for(i=0;i<=2;i++)
    {
        scanf(" %c",&alpha[i]);
    }
    for(o=2;o>=0;o--)
    {
        printf("%c ",alpha[o]);
    }
    return 0;
}
