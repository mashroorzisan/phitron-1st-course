#include <stdio.h>
#include <string.h>

int main() {
    int n,i = 0;
    scanf("%d",&n);
    char s[10001];
    while(i<n){
        int up=0,low=0,digit=0;
        scanf("%s",s);

        for(int j=0;j<strlen(s);j++){
            if(s[j]<=90 && s[j]>=65){
                up++;
            }
            if(s[j]<=122 && s[j]>=97){
                low++;
            }
            if(s[j]<=57 && s[j]>=48){
                digit++;
            }

        }
        printf("%d %d %d\n", up,low,digit);

        i++;
    }

     return 0;
}
