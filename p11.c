#include <stdio.h>
int main(){
    int sec;
    printf("enter second :");
    scanf("%d",&sec);
    
    printf("hr is :%d\n",sec/3600);
    printf("min is :%d\n",sec%3600/60);
    printf("sec :%d\n",sec%60);

return 0;
} 