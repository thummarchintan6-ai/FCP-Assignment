#include <stdio.h>
int main(){
    float  a;
    printf("enter unit :");
    scanf("%f",&a);
    if(a>=0 && a<=200){printf("charge :%f",a*0.5);}
    else if (a>200 && a<=400){printf("charge :%f",100 + (a-200)*0.65 );}
    else if (a>400 && a<=600){printf("charge :%f",230 + (a-400)*0.8 );}
    else if (a>600 ){printf("charge :%f",425 + (a-600)*125 );}
  
return 0;
} 