#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("Enter value of a and b ");
    scanf("%d %d",&a,&b);
    // q = a/b;
    // r = a-(b*q);
    // printf("remainder when %d is divided by %d is %d",a,b,r);
    r = a%b;
    printf("remainder = %d",r);
    
    return 0;
}