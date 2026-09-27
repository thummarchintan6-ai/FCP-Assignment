#include <stdio.h>

int main(){
    int num[100] ,n,max,smax;
    int c=2;
    printf("how many numbers you want to enter (<100) :");
    scanf("%d",&n);

    printf("enter 1 num :");
    scanf("%d",&num[0]);
    max=num[0];

    while(c<=n){
        printf("enter num %d :",c);
        scanf("%d",&num[c-1]);
        if(num[c-1]>=max){max=num[c-1];}
        c++;
        //else{smax=num[c-1];break;}
    }
    for(int i=0; i<=n; i++){
        if(max!=num[i]){
            smax=num[i];
            break;
        }
    }

    for(int i=0 ;i<n ;i++){
        if(num[i]>=smax && num[i]!=max){smax=num[i];}
    }
    printf("max=%d\n",max);
    printf("smax=%d",smax);

    return 0;
}