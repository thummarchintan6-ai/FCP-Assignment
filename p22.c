#include <stdio.h>
int main(){
    int a,f=1;
    printf("enter positive n :");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        f*=i;
    }
    printf("value of n factorial :%d",f);
return 0;
} 