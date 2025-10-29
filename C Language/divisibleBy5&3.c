#include<stdio.h>
int main(){
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    

    if(n%5==0 && n%3==0){//jo number 5 and 3 se divisible hota hai wah 15 se bhi divisible hota hai
        
         printf(" the given number is divisible by 5 and 3 ");
    
    }else 
      printf(" the given number is not divisible by 5 and 3 ");
    
    return 0;

}