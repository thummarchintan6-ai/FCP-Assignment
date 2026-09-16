#include <stdio.h>
int main (){
    int b=0 , a;
    printf("enter number :");
    scanf("%d",&a);
    
    while(b<=a){
        printf("ans :%d\n",b*b);
        b++;
    }
    return 0;
}