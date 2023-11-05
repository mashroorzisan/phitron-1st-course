#include<stdio.h>

void separate_nums(int num){
    if(num==0) return;
    int r=num % 10;
    separate_nums(num/10);
    printf("%d ", r);
}

int main(){
    int n;
    scanf("%d",&n);

        int num;
    for(int i = 0; i<n; i++){
        scanf("%d", &num);
        separate_nums(num);
        if(num==0) printf("0");
        printf("\n");
    }
    return 0 ;
}