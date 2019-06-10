#include<stdio.h>
main(int argc, char const *argv[])
{
    int size,i,sum=0;
    printf("Input the number of the elements in array: ");
    scanf("%d",&size);
    int num[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("The sum of an array is %d",sum);
    return 0;
}
