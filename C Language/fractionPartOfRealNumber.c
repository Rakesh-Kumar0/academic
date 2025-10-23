#include<stdio.h>
int main(){
    float x;
    printf("Enter number ");
    scanf("%f",&x); // scanf is used to take input
    int y = x;
    float z= x-y;
    printf("fraction part is = %f",z);
    return 0;
    
}