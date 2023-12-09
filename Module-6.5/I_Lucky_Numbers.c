#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    
    int f = N % 10;
    int l = N / 10;
    if( f%l == 0 || l%f == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}