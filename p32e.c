#include <stdio.h>
int main(){
    int n,a,b,c=2,max,smax;
    printf("how many num you want to enter :");
    scanf("%d",&n);
    printf("enter num 1 :");
    scanf("%d",&a);

    max=a;
    /*while(c>=2){
        printf("enter num %d :",c);
        scanf("%d",&b);
        c++;
        if(b>=max){max=b;}
        else{smax=b;break;}


    }*/

    for(int i=3; i<=n;i++){
        printf("enter num %d :",i);
        scanf("%d",&b);
        
        if(b>max){smax=max;max=b;}
        //else if(b>smax){smax=b;}
        
    }
    printf("maximum num :%d\n",max);
    printf("second maximum num :%d\n",smax);
    
    
return 0;
} 