#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int missing_number(long long int *ar){
    long long int mult = ar[1]*ar[2]*ar[3];
    if(ar[0]==0){
        return 0;
    }
    else if(ar[0]%mult==0){
        long long int missing = ar[0]/mult;
        return missing;
    }
    else{
        return -1;
    }
}


int main() {
    int t;
    scanf("%d",&t);
    long long int ar[4];
    for(int i = 0;i<t;i++){
        for(int j = 0 ;j<4;j++){
            scanf("%lld",&ar[j]);
        }
        long long int missing = missing_number(ar);
        printf("%lld\n",missing); 
    }
    
    return 0;
}
