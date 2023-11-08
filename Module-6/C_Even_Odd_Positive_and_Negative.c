#include<stdio.h>
int main(){
    int N;
    scanf("%d\n",&N);
    int s = 0;
    int e = 0, o = 0, p = 0, n = 0;
    for(int i=0; i<N; i++){
        scanf("%d",&s);
        //even numbers
        if(s%2==0){
            e++;
        }
        if(s%2 != 0){
            o++;
        }
        //positive numbers
        if(s>0){
            p++;
        }
        if(s<0){
            n++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",e,o,p,n);

    return 0;
}