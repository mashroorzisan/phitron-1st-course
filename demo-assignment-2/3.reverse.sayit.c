#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    int arr[N];
    scanf("%d\n", &N);
    for(int i = 0; i<N; i++){
        scanf("%d ", &i);
    }
    for(int i = 0;i<N;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}