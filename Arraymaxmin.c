#include<stdio.h>
main(int argc, char const *argv[])
{
    int max=9999,min=-9999;
    int i;
    int size;
    printf("Input the number of the elements in array: ");
    scanf("%d",&size);
    int number[size];
    for(i=0; i<size ; i++)
    {
        scanf("%d",&number[i]);
        if(number[i]>min)
        {
            min = number[i];
        }
        if(number[i]<max)
        {
            max = number[i];
        }
    }
    printf("The maximum value is %d\nThe minimum value is %d",min,max);
    return 0;
}
