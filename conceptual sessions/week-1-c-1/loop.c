#include<stdio.h>
int main(){
    for(int i = 1;i<=10; i++){
        if(i%2 == 1){
            continue;
        }
        if(i == 5){
            break;
        }
        printf("%d => %d\n", i, i*i);
    }

    return 0;
}