#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter mark of subjects ");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
    float per = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("percantage = %f",per);

    return 0;
}