#include <stdio.h>
int main(){
    float a,b;
    printf("enter nu.1 :");
    scanf("%f",&a);

    printf("enter nu.2 :");
    scanf("%f",&b);
    switch(1){
        case 1 :printf("%f + %f = %f\n",a,b,a+b);
        case 2 :printf("%f - %f = %f\n",a,b,a-b);
        case 3 :printf("%f * %f = %f\n",a,b,a*b);
        case 4 :printf("%f / %f = %f\n",a,b,a/b);
    }

return 0;
} 