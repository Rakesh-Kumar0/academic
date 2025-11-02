#include<stdio.h>
int main(){
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf(" the given number is three digit number ");
    
    }else 
      printf(" the given number not is three digit number ");
    
    return 0;
}