#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter HR :");
    scanf("%d",&a);

    if(0<=a && a<=24){
        printf("enter MIN :");
        scanf("%d",&b);

        if(0<=b && b<=60) {
            printf("enter SEC :");
            scanf("%d",&c);
                                                          //if always work but don't properly
            if(0<=c && c<=60){
                printf("SECOND :%d",a*3600+b*60+c);
            }
            else{
                printf("wrong information");
            }
        }
        else{
        printf("wrong information");
        }
    }
    else{
        printf("wrong information");
    }


return 0;
} 