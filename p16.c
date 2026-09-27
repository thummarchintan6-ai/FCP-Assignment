#include <stdio.h>
int main(){
    int a,b,c,max;
    printf("enter num 1 :");
    scanf("%d",&a);
    printf("enter num 2 :");
    scanf("%d",&b);
    printf("enter num 3 :");
    scanf("%d",&c);
    max=a;
    if(b>max){max=b;}
    if(c>max){max=c;}
    printf("%d",max);
    
return 0;
} 