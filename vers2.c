#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, a;
    printf("Enter a value = ");
    scanf("%f", &a);
    printf("Enter x value = ");
    scanf("%f", &x);

    if (x<=0){
        y = pow(x, 3) - log(fabs(x) + 1);
        printf("if x <= 0, then y = %f\n", y);
    }else if (0<x<=a){
        y = (5*x + pow(x, 2))/(pow(((x*x) + 3), 3));
        printf("\n if 0 < x <= a, then y = %f\n", y);
    }else if (x>a){
        y = cos(pow(x, 3)+ x*x);
        printf("\n if x > a, then y = %f\n", y);
    }

    return 0;
}
