#include<stdio.h>
int main(){
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    for(int i=n, j=1;i<=n*10;i=i+n,j++){
        printf("%d X %d = %d\n",n,j,i);
    }
    return 0;
}