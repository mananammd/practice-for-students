#include <stdio.h>

int quotientFour(int numb) {
    char num[4];
    float sum = 0;
    for (int i = 0; i < 4; ++i) {
        num[i] = numb % 10;
        sum += numb % 10;
        numb = numb / 10;
    }
    if ((sum / num[3])-(int)(sum / num[3])  >= 0.5) {
        return sum / num[3] + 1;
    }
    else {
        return sum / num[3];
    }
}

int main()
{
    int numbOne = 4234;
    printf("%d", quotientFour(numbOne));
    return 0;
}
