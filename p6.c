#include <stdio.h>
int main(){
    int a,b;
    printf("enter n_1 :");
    scanf("%d",&a);
    printf("enter n_2 :");
    scanf("%d",&b);
    b+=a;
    a=(a-b)*-1;
    b-=a;
    printf("n_1=%d",a);
    printf("n_2=%d",b);
    
return 0;
} 
