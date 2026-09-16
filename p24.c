#include <stdio.h>
#include <math.h>
int main(){
    float x,n,y;
    printf("enter x :");
    scanf("%f",&x);
    printf("enter n :");
    scanf("%f",&n);
    if(n==1){
        printf("y=%f",1+x);
    }
    else if(n==2){
        printf("y=%f",1+x/n);
    }
    else if(n==3){
        printf("y=%f",1+pow(x,n));
    }
    else if(n>3 || n<1){
        printf("y=%f",1+n*x);
    }
    
return 0;
} 