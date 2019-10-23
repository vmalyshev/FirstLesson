#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main(){
    double x,y,b,z; //x = -4,52, y = 0.75
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    z = sqrt((sin(fabs(x) + y))*(sin(fabs(x) + y)));
    b = (exp(-2*x))*(tan(z)+2*y);
    printf("b = %lf\n",b);
    printf("Press Enter to close terminal\n");

    return 0;
}
