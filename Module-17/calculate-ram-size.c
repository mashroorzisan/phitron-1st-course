#include<stdio.h>

int func(int i){

    printf("%d\n", i);
    func(i+1);
    return i;
}
int main(){
    int i = 1;
    func(i);
    return 0;
}