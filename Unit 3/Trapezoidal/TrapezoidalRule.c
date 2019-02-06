/*program to find Integration of given funtion by using Trapezoidal rule*/
#include<stdio.h>
#include<math.h>
#define f(x) x*x*x+1


int main(){
    float a,b,it,h;
    printf("\nEnter value of a: ");
    scanf("%f",&a);

    printf("\nEnter value of b: ");
    scanf("%f",&b);

    h = (b-a)/2;
    it = h*(f(b) -f(a));
    printf("Integration = %f\n",it);
}