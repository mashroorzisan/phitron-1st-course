#include<stdio.h>
int main(){
    int x;
    int correct_pass = 1999;

    while(scanf("%d", &x)!= EOF){
        if(x==correct_pass){
            printf("Correct\n");
            return 0;
        }
        else{
            printf("Wrong\n");
        }
    }

    return 0;
}