#include "math_funcs.h"

int MathFuncs::divide(int num1, int num2)
{
    if(num2 == 0)
        return -1;

    return num1 / num2;
}

int MathFuncs::multiply(int num1, int num2)
{
    return num1 * num2;
}

int MathFuncs::square(int num)
{
    return num * num;
}
