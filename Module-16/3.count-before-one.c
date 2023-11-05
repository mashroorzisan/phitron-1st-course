#include<stdio.h>
// //prototyping
int count_before_one(int [], int);

int main(){
    int n, count;
    scanf("%d", &n);
    int ar[n];
    for(int i=1;i<=n;i++){
       scanf("%d", &ar[i]);
    }
    count = count_before_one(ar, n);
    printf("%d", count);
}
int count_before_one(int ar[], int n){
    int count = 0;
    for(int i=1;i<=n;i++){
        if(ar[i]==1){
            return count;
        }
        count++;
    }
    return count;
}


