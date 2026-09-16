#include <stdio.h>
int main(){
    int a,r,b=0;
    printf("enter number:");
    scanf("%d",&a);
    for (int f=1; f>0 && f<=a ; f++){
       for(int x=1 ; x>0 && x<=a ; x++){
        r=f*x;
       if(r==a){b+=x;}       
      }
     }
    if(b==a+1){ printf("prime");} 
    else{printf("composite");}
    
return 0;
} 