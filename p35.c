#include <stdio.h>
int main(){
    int a,r,s=0;
    printf("enter number:");
    scanf("%d",&a);
    while(s>=10 || s==0){ 
        s=0;
    while(a>0){
        r=a%10;
        s=s+r;
        printf("%d\n",s);
        a/=10;
    }

    a=s;
}
printf("%d",s);
   
return 0;
} 