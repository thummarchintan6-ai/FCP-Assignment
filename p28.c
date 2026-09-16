#include <stdio.h>
#include <math.h>

int main(){
    int x,a,z,r;
    float y,n=0,s=0;
    
    printf("enter number :");
    scanf("%d",&x);
    a=x;
    z=x;
    
    while(a>0){
        r=a%10;
        n++;
        a=a/10;
    }                                    //problem is pow() is requear duble /float not a int so this give error in 153
    
    while(z>0){
        y=z%10;
        s+=pow(y,n);
        z/=10;
    }
    
    if(x==s){ printf("armstong number\n");} 
    else{printf("no armstong number\n") ;}
return 0;
} 