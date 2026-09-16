#include <stdio.h>
int main(){
    int a,r,x;
    printf("enter number :");
    scanf("%d",&x);
    a=x;
    for(int i ; a>0 ;a/=10){
        i=a%10;
        r=(r+i)*10; printf("%d\n",r);
    }
    x==r/10 ? printf("number is polindrome") : printf("number is not polindrome") ;
    
return 0;
} 