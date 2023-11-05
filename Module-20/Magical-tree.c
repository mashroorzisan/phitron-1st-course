#include <stdio.h>


int main() {
    int n;
    int count=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i % 2 !=0){
            count++;
        }
    }
    int lines = count + 5;  
    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= lines - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <=5; j++) {
            printf(" ");
        }
        for(int k = 1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
