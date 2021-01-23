#include <stdio.h>

int printSimple(int n) {
    int k = 0; //
    for (int i = 2; i < n + 1; ++i) {
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                ++k;
            }
        }
    if (k < 2) {
        printf("%d ", i);
    }
    k = 0;    
    }
    return 0;
}

int main()
{
    int n = 101;
    printSimple(n);
    return 0;
}