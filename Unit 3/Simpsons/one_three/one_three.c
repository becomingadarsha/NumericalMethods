/*program to find Integration of given funtion by using Simson's 1/3 rule*/

#include<stdio.h>
#include<math.h>

#define f(x) (3*x*x) + (2*x) -5

int main(int argc, char const *argv[])
{
    float x0, x2,h, x1, fx0, fx1, fx2;

    int n =2;
    printf("Enter value of upper limit and lower limit : ");
    scanf("%f%f",&x0,&x2);

    h = (x2- x0)/n;

    x1 = x0 +h;
    
    fx0 = f(x0);
    fx1 = f(x1);
    fx2 =  f(x2);

    float result;

    result = (fx0 + (4*fx1) + fx2)*h/3;

    printf("Integration is  %f\n", result);
    return 0;
}
