#include<stdio.h>
//insertion

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1];
    //get the initial array
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    //get position & value
    int pos, val;
    scanf("%d %d", &pos, &val);
    //move to the right
    for(int i=n;i>=pos+1;i--){
        arr[i] = arr[i-1];
    }
    //move position
    arr[pos] = val;
    //print
    for(int i=0;i<=n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}