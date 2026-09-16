#include <stdio.h>
int main(){
    int a,b,x;
    printf("enter base :");
    scanf("%d",&a);

    printf("enter power :");
    scanf("%d",&b);
    x=a;

    for(int i=1; i<b;i++){
        a*=x;
    }
    printf("value is :%d",a);

  
return 0;
} 