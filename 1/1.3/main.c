#include <stdio.h>
#include <math.h>

float fraction(int numb) {  //fraction - дробная часть
   float quot = (float)(numb % 10) / (numb / 10); //quot - quotient - частное (делим младшую чиселку на старшую)
   float mult = (numb % 10) * (numb / 10); //mult - умножение
   float res = (mult - quot) - floor(mult - quot); //эта функции берет целую часть
   return res;
}

int main()
{
    int number = 31;
    printf("%f", fraction(number));
    return 0;
}
