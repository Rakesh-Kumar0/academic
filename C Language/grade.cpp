#include<stdio.h>
int main(){
    int n;
    printf("Enter percantage ");
    scanf("%d",&n);
    if(n>90){
        printf("excellent ");
    }else if(n>70){
        printf("very good");
    }else if(n>50){
        printf("good");
    }else{
        printf("fail");
    }
    return 0;
}