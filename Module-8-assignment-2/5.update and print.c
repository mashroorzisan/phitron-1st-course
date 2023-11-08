#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int  N, x, v;
    scanf("%d\n",&N);
    int arr[N];
    for(int i = 0; i<N;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d %d", &x, &v);
    arr[x] = v;
    for(int i = N-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
