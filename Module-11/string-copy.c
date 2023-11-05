#include <stdio.h>
#include <string.h>

int main() {
    // Copy string
    char a[101], b[101];
    gets(a);
    int len = strlen(a);
    for(int i=0;i<len;i++){
        b[i] = a[i];
    }


    printf("%s\n", a);
    printf("%s", b);
    return 0;
}
