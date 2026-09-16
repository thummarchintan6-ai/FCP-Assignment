#include <stdio.h>


int main(){
    int s1,s2,s3,s4,s5;
    printf("subject_1:");
    scanf("%d",&s1);
   // int s2;
    printf("subject_2:");
    scanf("%d",&s2);
   // int s3; 
    printf("subject_3:");
    scanf("%d",&s3);
    //int s4;
    printf("subject_4:");
    scanf("%d",&s4);
    //int s5;
    printf("subject_5:");
    scanf("%d",&s5);

    int t=s1+s2+s3+s4+s5;

    printf("total:%d\n",t);
    printf("percentage:%f",t/500.0*100);

    return 0; 
}    