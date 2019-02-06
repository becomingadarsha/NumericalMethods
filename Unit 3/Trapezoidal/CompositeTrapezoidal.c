/*program to find Integration of given funtion by using composit Trapezoidal rule*/
#include<stdio.h>
#include<math.h>
#define f(x) (3*(x)*(x)) + (2*x) -5

int main(void)
{
    int i,n;
    float a,b,h,it;
    float sum =0;
    printf("Enter value of a and b :");
    scanf("%f%f",&a,&b);

    printf("Enter number of segments : ");
    scanf("%d",&n);

    h = (b-a)/n;


    for (i= 1;i<n-1;i++){
        sum = sum + f(a+ (i*h));
    }

    it = h*((2*sum)+ f(a)+ f(b) )/2 ;

    printf("Integration is %f\n", it);
    return 0;
}
