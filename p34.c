#include <stdio.h>
int main(){
    int a=0,b=1,c;
    printf("0,1,");
    for(int i=0 ; i<=20 ; i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d,",c);
    }
    
  
return 0;
} 