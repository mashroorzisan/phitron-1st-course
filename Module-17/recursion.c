#include<stdio.h>
void sum(int a){
    printf("%d\n",a);
    a++;
    if(a<=10)//termination point of recursion
        sum(a);
}

int main(){

    int a=1;
    sum(a);
    
    return 0;
}