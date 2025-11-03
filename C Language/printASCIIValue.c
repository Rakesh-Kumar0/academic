#include<stdio.h>
int main(){
    char ch;
    for(ch = 'A';ch<='z';ch++){
        printf("%c = %d\n ",ch,(int)ch);
    }
    return 0;

}