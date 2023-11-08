#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x<='Z' && x>='A'){
        x = x + 32;
        printf("%c", x);
    }
    else if(x<='z' && x>='a'){
        x = x - 32;
        printf("%c",x);
        
    }
    else{
        return;
    }

    return 0;
}