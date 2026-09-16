#include <stdio.h>
int main(){
    char a;
    printf("charector :");
    scanf("%d",&a);

    if(a>='a' && a<='z'){printf("small case");}
    else if(a>='A' && a<='Z'){printf("small case");}
    else {printf("digit or spacial charecter");}
    
return 0;
} 