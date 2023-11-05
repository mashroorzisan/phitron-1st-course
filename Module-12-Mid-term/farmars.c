#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n",&n);
    int m1, m2, d;
    int ft;
    for(int i = 0;i<n;i++){
        scanf("%d %d %d\n", &m1, &m2, &d);
        ft = d - ((m1*d)/(m1+m2));
        printf("%d\n", ft); 
    }
    



    return 0;
}
