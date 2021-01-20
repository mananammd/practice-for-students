#include <stdio.h>
#include <math.h>

int belongsToSquare(int sqA, int r, int x, int y) {
    if ((x * x + y * y >= r * r) && (abs(x) <= sqA) && (abs(y) <= sqA)) {
        return 1;
    }
    else {
        return 0;
    }
}

int belongsToRing(int R, int r, int x, int y) {
    if ((x * x + y * y >= r * r) && (x * x + y * y <= R * R)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int sqA = 3, r = 1, x = 2, y = 2, R = 3;
    printf("Square %d \n",belongsToSquare(sqA, r, x, y));
    printf("Ring %d \n", belongsToRing(R, r, x, y));
    return 0;
}