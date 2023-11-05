#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    // int zero=0;
    // int two=0; 
    // int three=0;
    // int four=0;
    // int five=0;
    // int nine=0;
    int count[10]={0};
    for(int i=0; i<n; i++){
        count[a[i]]++; 
        // if(a[i]==0){
        //     count[0]++;
        // }
        // if(a[i]==1){
        //     count[1]++;
        // }
        // if(a[i]==2){
        //     count[2]++;
        // }
        // if(a[i]==3){
        //     count[3]++;
        // }
    }

    // printf("0 - %d\n", count[0]);
    // printf("1 - %d\n", count[1]);
    // printf("2 - %d\n", count[2]);
    // printf("3 - %d\n", count[3]);
    for(int i=0;i<n;i++){
        printf("%d - %d\n",i, count[i]);
    }

    return 0;
}