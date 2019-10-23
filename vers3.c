#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main(){
    double xn, xk, xh, a, x;
    double y;
    printf("Enter start point value xn = ");
    scanf("%lf", &xn);
    printf("Enter finish point value xk = ");
    scanf("%lf", &xk);
    printf("Enter step value xh = ");
    scanf("%lf", &xh);
    printf("Enter a value a = ");
    scanf("%lf", &a);
    x=xn;
    while(x>=xk){
        if(x<=0){ y = log(x*x + 5); } else
        if(0<x<=a){ y = sin(exp(x) + 2);} else
        if(x>a){ y = (sin(x + 3))/(exp(2 * x) + cos(x + 1));}
            printf("\n\t %4.3f\t\t%4.3f\n", x,y);
            x = x + xh;
    }
   return 0;
}
