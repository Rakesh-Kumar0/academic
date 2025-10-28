#include<stdio.h>
int main(){
    int number;
    printf("Enter number ");
    scanf("%d",&number);
    if(number<0){
        number=(-1)*number;
        // printf(" the absolute value is %d",number);
    
    }
    // }else
    printf("the absolute value is %d",number);
    return 0;

}