#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a ,b and c ");
    scanf("%d%d%d",&a,&b,&c);
    

    if(a>b){// b is out of race
     if(a>c){
         printf(" the greatest is %d ",a);
     }else{//c>a -> b<a<c
          printf("the greatest is %d",c);
     }
    }
    else{ //b>a -> a ab sabse bada nahi hai
        if(b>c){
          printf("the greatest is %d",b);
        } else{ //b<c
          printf("the greatest is %d",c);
        } 

    }
    
    return 0;

}