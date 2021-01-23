#include <stdio.h>
#include <math.h>

void printSimple(int n) {
    int k = 0; //колво делителей
    for (int i = 2; i <= n; ++i) {
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                ++k;
                continue;
            }
        }
        if (k == 0) {
            printf("%d ", i);
        }
    k = 0;    
    }
}

int main()
{
    int n = 11;
    printSimple(n);
    return 0;
}