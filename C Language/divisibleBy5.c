#include<stdio.h>
int main(){
    int number;
    printf("Enter number ");
    scanf("%d",&number);
    if(number%5==0){
        printf("the number is divisible by 5 ");

    }else
        printf("the number is not divisible by 5 ");
        return 0;
        
}