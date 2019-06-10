#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c && pow(c,2)==pow(a,2)+pow(b,2))
        printf("Pythagorean is valid!");
    
    else if(a<b && b>c){
        printf("Pythagorean is invalid! 'a' and 'b' must less than 'c'");
    }
    else if(a>b && b>c){
        printf("Pythagorean is invalid! 'a' must less than 'b'");
    }

    else 
    printf("Pythagorean s invalid");
}