#include <stdio.h>
int main(){
    int a,r,n=0,s=0;
    printf("enter number:");
    scanf("%d",&a);
    
    while(a>0){
        r=a%10;
        s+=r;
        a=a/10;
    }
   printf("ans :%d",s);
   
return 0;
} 