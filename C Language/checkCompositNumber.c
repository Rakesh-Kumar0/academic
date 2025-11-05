#include<stdio.h>
int main(){
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            printf("the given number is composite ");
            break;
        }
        
    }
    return 0;
    
}