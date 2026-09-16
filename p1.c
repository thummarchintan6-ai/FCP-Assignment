#include <stdio.h>
int main(){
    float p,r,t;
    printf("enter principal (money):");
    scanf("%f",&p);
    printf("enter rate of intrest :");
    scanf("%f",&r);
    printf("enter time in year :");
    scanf("%f",&t);
    printf("simple intrest :%f",p*t*r/100);
    
return 0;
} 