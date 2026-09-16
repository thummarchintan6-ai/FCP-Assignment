#include <stdio.h>
int main(){
    int bs,hra,da,o;
    printf("enter basic salary :");
    scanf("%d",&bs);
    printf("enter HRA :");
    scanf("%d",&hra);
    printf("enter DA:");
    scanf("%d",&da);
    printf("enter other income:");
    scanf("%d",&o);
    
    printf("gross salary :%d",bs+hra+da+o);
    
return 0;
} 