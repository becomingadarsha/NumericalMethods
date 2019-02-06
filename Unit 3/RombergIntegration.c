//


#include<stdio.h>
#include<math.h>

float f(float x) {
    return 1/x;
}

int main(int argc, char const *argv[])
{
    float x0,xn , R[10][10],h;
    int p,q;

    printf("Enter lower and upper limit : ");
    scanf("%f%f",&x0,&xn);

    printf("Enter parameter p and q of R[p,q] = ");
    scanf("%d%d",&p,&q);

    h = xn- x0;

    R[0][0] = h/2*((f(x0)) + (f(xn)));






    return 0;
}

