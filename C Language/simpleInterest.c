#include<stdio.h>
int main(){
    int p,r,t,si;
    printf("Enter principle value  :");
    scanf("%d",&p);
    printf("Enter rate :");
    scanf("%d",&r);
    printf("Enter time :");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf(" simple interest = %d",si);
    return 0;
}