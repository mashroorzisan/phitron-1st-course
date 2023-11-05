#include<stdio.h>
//function prototyping
int sum(int, int);



int main(){
    //function call and saving to a variable
    int x = sum(10, 40);
    printf("sum is - %d", x);
}


//function declaration
int sum(int a, int b){
    return a + b;
}