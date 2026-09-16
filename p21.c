#include <stdio.h>
int main(){
    int c;
    float a,b;
    printf("number_1 :");
    scanf("%f",&a);
    printf("number_2 :");
    scanf("%f",&a);
    printf("for sum enter :1\nfor subtection enter :2\nfor multification enter :3\nfor divition enter :4\n");
    printf("number_3 :");
    scanf("%f",&c);
    switch(c){
        case 1:printf("%d+%d=%d",a,b,a+b);
        break;
        case 2:printf("%d-%d=%d",a,b,a-b);
        break;
        case 3:printf("%d*%d=%d",a,b,a*b);
        break;
        case 4:printf("%d/%d=%d",a,b,a/b);
        break;
    }
return 0;
} 