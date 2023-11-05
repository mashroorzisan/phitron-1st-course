#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101];
    gets(A);
    gets(B);
    
    int len_a=strlen(A), len_b=strlen(B);
    
    printf("%d %d\n", len_a, len_b);
    printf("%s%s\n",A,B);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    
    printf("%s %s\n", A, B);
    return 0;
}
