#include <stdio.h>
#include <string.h>

int main() {
    // Copy string
    
    char a[101], b[101];
    scanf("%s %s",a,b);
    strcpy(a,b);
    printf("%s\n%s",a,b);
    return 0;
}
