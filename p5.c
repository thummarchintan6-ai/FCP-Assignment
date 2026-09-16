#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter n_1 :");
    scanf("%d",&a);

    printf("enter n_2 :");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf("after swap\nn_1 =%d\n",a);
    printf("n_2 =%d\n",b);
  

return 0;
} 