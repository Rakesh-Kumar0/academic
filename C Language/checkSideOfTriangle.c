#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a ,b and c ");
    scanf("%d%d%d",&a,&b,&c);
    

    if((a+b)>c && (b+c)>a&& (a+c)>b){
         printf("the given sides are side of triangle ");
    }else 
        printf("the given sides are not side of triangle ");

    
    return 0;

}