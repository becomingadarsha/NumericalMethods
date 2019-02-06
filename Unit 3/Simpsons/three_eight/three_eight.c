#include<stdio.h>
#include<math.h>

#define f(x) ((x*x) -1) // 1- x^2


int main(int argc, char const *argv[])
{
    
    float x0, x3, h; //x0 = lower value , x3 = upper value
    float x1,x2,f0,f1,f2,f3;
    int n=3;

    printf("Enter value of upper and lower limit : ");
    scanf("%f%f",&x0,&x3);

    h = (x3- x0)/n;

    x1 = x0 + h;
    x2 = x0 + 2*h;

    float result;

    result = ((f(x0) + 3*f(x1) + 3*f(x2) + f(x3)))*h*3/8;

    printf("Integration is %f\n", result);


    return 0;
}
