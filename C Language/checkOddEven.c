#include<stdio.h>
int main(){
    int number;
    printf("enter number :");
    scanf("%d",&number);//dabba bana aur usme value 7 store hua
    if(number%2==0){    //if condition is failed then this code will not run
        printf("the given number is even");
    }
        // if (number%2!=0){
        //     printf("the given number is odd");
        // }


    else

        printf("the given number is odd ");

    
    return 0;

}