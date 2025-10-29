#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price ");
    scanf("%d",&cp);
     printf("Enter selling price ");
    scanf("%d",&sp);
    if(cp<sp){
        
         printf("profit");
    
    }
    if(cp>sp){
        printf("loss");
    }
    if(cp==sp){
        printf("no profit no loss");
    }
    
    return 0;

}