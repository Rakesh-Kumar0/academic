#include<stdio.h>
int main(){
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    int product = 1;
    // for(int i=1;i<=n;i++){
    //     product = product*i;
    // }printf("factorial = %d",product);
    for(int i=1;i<=n;i++){
        product = product*i;
        printf("the factorial of %d is %d\n",i,product);
    }
    return 0;
}