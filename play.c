#include<stdio.h>
#include<math.h>
int main(){
     int  a,b,c,tri;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c){
        tri = pow(a,2)+pow(b,2);
        if(tri = pow(c,2)){
            printf("Pythagorean is valid!");
        }
        else{
            printf("Pythagorean is invalid!");
            printf("%d + %d = %d =%d",pow(a,2),pow(b,2),pow(c,2),pow(a,2)+pow(b,2));
        }
    }
    else if(a<b && b>c){
        printf("Pythagorean is invalid! 'a' and 'b' must less than 'c'");
    }
    else if(a>b && b>c){
        printf("Pythagorean is invalid! 'a' must less than 'b'");
    }
