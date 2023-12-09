#include<stdio.h>
int main(){
    int n;
    scanf("%d\n", &n);
    int i = n;
    int s = 0;
    int max = 0;
    while(i>0){
        scanf("%d", &s);
        if(s>=max){
            max = s;
        }
        i--;
    }
    printf("%d\n", max);

    return 0;
}