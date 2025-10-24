#include<stdio.h>
int main(){
    float radius,pi,volume;
    printf("Enter radius :");
    scanf("%f",&radius);
    pi = 3.14;
    volume = (4*pi*radius*radius*radius)/3;
    printf("%f",volume);
    return 0;


}