#include <stdio.h>
int main(){
    int a,b,c,d,e,total;
    printf("subject_1 ");
    scanf("%d",&a);
    printf("subject_2 ");
    scanf("%d",&b);
    printf("subject_3 ");
    scanf("%d",&c);
    printf("subject_4 ");
    scanf("%d",&d);
    printf("subject_5 ");
    scanf("%d",&e);
    total=(a+b+c+d+e)/50;
    switch(total){
        case 10 : printf("A++");
        break;
        case 9 : printf("A");
        break;
        case 8 : printf("B++");
        break;
        case 7 : printf("B");
        break;
        case 6 : printf("C++");
        break;
        case 5 : printf("C");
        break;
        case 4 : printf("D++");
        break;
        case 3 : printf("D");
        break;
        case 2 : printf("fail");
        break;
        case 1 : printf("fail");
        break;
        case 0 : printf("fail");
        break;
        default :printf("wrong information");
    }
    
return 0;
} 