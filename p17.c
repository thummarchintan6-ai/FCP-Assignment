#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter n_1 :");
    scanf("%d",&a);

    printf("enter n_2 :");
    scanf("%d",&b);

    printf("enter n_3 :");
    scanf("%d",&c);
  
    if((a<b && b<c)&&(b<a && a<c)){
        printf("max :n_3");
    }
    else if ((c<b && b<a) && (b<c && c<a)){
        printf("max :n_1");
    }
    else if ((c<a && a<b) && (a<c && c<b));{
        printf("max :n_2");
    }
return 0;
} 