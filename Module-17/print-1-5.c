#include<stdio.h>
void series(int i){
    if(i==6) return;
    printf("%d\n",i);//first print
    series(i+1);//then call recursion
}

int main(){

    int i=1;
    series(i);
    
    return 0;
}