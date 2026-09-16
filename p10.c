#include <stdio.h>
int main(){
    float a,b,c;
    printf("enter M :");
    scanf("%f",&a);

    if(0<=a && a<=200){
        printf("enter P :");
        scanf("%f",&b);

        if(0<=b && b<=200) {
            printf("enter C :");
            scanf("%f",&c);
                                                          //if always work but don't properly
            if(0<=c && c<=200){
                printf("CM is :%f201",a/2+b/2+c/2);
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