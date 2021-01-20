#include <stdio.h>

int smallNumb(int numb) {
   int sumtwo = numb % 10 + (numb / 10) % 10;
   int res = sumtwo * (numb / 100);
   return res % 10;
}

int main()
{
    int number = 977;
    printf("%d", smallNumb(number));
    return 0;
}