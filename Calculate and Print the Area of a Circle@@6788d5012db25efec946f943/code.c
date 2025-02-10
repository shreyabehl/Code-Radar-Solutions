
#include <math.h>
#include <stdio.h>
#define PI 3.142

double findArea(int r) 
{ return PI * r * r; }

int main()
{
    printf("Area is %.2f", findArea(5));
    return 0;
}