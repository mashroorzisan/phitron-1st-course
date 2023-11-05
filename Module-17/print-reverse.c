#include<stdio.h>
void func(int i){
    if(i==5) return;
    func(i+1);//first recursion
    printf("%d\n", i);//then print
    
}


int main(){


    func(1);
    return 0;
}