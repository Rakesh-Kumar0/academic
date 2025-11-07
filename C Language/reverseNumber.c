#include<stdio.h>
int main(){
    int n;
    printf("Enter number "); 
    scanf("%d",&n);
    int r=0;
    while(n>0){
       int lastdigit = n%10;
        r = r+lastdigit;
        r = r*10;
        n = n/10;

    }
    r = r/10;//or we can sweep r = r+ld and r=r*10
    printf("the sum of digits is %d ",r);
    return 0;

}