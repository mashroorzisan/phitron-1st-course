#include<stdio.h>
void func(int ar[], int n, int i){
    //base case
    if(i==n) return;
    printf("%d\n", ar[i]);
    func(ar,n,++i);
}
int main(){
    int ar[3] = {1,2,3};
    func(ar,3,0);

    return 0 ;
}