#include<stdio.h>
#include<string.h>
int main(){
    char x[21], y[21];
    gets(x);
    gets(y);
    int val = strcmp(x,y);
    if(val==0){
        printf("%s", x);
    }
    else if(val<0){
        printf("%s",x);
    }
    else{
        printf("%s",y);
    }
    // printf("%d",val);
    return 0;
}