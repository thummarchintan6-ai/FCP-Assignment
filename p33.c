#include <stdio.h>
int main(){
    int n,a,b,max,min;
    printf("how many num you want to enter :");
    scanf("%d",&n);
    printf("enter num 1 :");
    scanf("%d",&a);
    max=a;
    min=a;
    for(int i=2; i<=n;i++){
        printf("enter num %i :",i);
        scanf("%d",&b);
        if(b>=max){max=b;}
        if(b<=min){min=b;}
    }
    printf("maximum num :%d\n",max);
    printf("maximum num :%d",min);
    
    
return 0;
} 