#include<stdio.h>

// return_type name(params){
//     code 
//     return what?
// }

int sum(int a,int b){
    return a+b;
}
int main(){
    // function call
    // name(params)
    int x = sum(10, 30);
    printf("sum is = %d", x);
    return 0;
}