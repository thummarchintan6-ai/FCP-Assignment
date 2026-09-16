#include <stdio.h>
int main(){
    int a,i=1,s1=0,s2=0;
    printf("enter number:");
    scanf("%d",&a);
    while(i<=a){
        if(i%2==0){s1+=i;}
        else{s2+=i;}
        i++;
    }
    printf("\nsum of odd :%d\n",s2);
    printf("sum of even :%d",s1);

return 0;
} 