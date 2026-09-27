#include <stdio.h>

int main(){
    int a;
    float d=0.00,s=1.00;
    printf("enter your number :");
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        s*=i;
        
        d+=i/s;
        
    }
    printf("ans :%f",d);


    return 0;
}