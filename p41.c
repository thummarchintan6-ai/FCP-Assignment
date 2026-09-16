#include <stdio.h>
int main(){
    int a,r;
    printf("enter number:");
    scanf("%d",&a);
    for (int f=1; f>0 && f<=a ; f++){
       for(int x=1 ; x>0 && x<=a ; x++){
        r=f*x;
       if(r==a){printf("%d,",x);}
       }
    }
    
return 0;
} 