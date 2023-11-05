#include <stdio.h>
#include <string.h>

int main() {
    // Copy string
    
    char a[101], b[101];
    scanf("%s %s",a,b);
    
    for(int i=0; i<strlen(a);i++){
        b[i] = a[i];
    }
    b[strlen(a)] = '\0';
    printf("%s %s",a,b);
    return 0;
}
