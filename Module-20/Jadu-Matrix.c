#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checker(int ar[100][100], int r, int c) {
    int z = c - 1;
    int flag = 1;

    if (r == c) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                // primary diagonal
                if (i == j) {
                    if (ar[i][j] == 1) {
                        // secondary diagonal
                        if (ar[i][z] == 1) {
                            continue;
                        } else {
                            flag = 0;
                            break;
                        }
                    } else {
                        flag = 0;
                        break;
                    }
                }
                if (j == z) {
                    if (ar[i][j] != 1) {
                        flag = 0;
                        break;
                    }
                } else {
                    if (ar[i][j] != 0) {
                        flag = 0;
                        break;
                    }
                }
            }
            z--;
        }
    } else {
        flag = 0;
    }

    return flag;
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int ar[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    int check = checker(ar, r, c);
    if (check == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
