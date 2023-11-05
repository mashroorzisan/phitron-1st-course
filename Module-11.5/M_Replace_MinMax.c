#include<stdio.h>
int main(){
    int n;
    int max = 0, min = 100000;
    int maxi = 0, mini = 0;

    scanf("%d", &n);
    int ar[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d ", &ar[i]);
    }
    for(int i = 0; i<n; i++){
        if(ar[i]>max){
            max = ar[i];
            maxi = i;
        }
        if(ar[i]<min){
            min = ar[i];
            mini = i;
        }
    }
    // printf("%d %d ", min, max);
    ar[maxi] = min;
    ar[mini] = max;
 
    for(int i = 0; i<n; i++){
        printf("%d ", ar[i]);
    }
    
}