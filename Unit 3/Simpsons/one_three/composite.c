/*program to find Integration of given funtion by using composite Simson's 1/3 rule*/


#include<stdio.h>
#include<math.h>

#define f(x) 1/(1+x)

int main(int argc, char const *argv[])
{
    
    float x0, xn, h, fx0, fxn, result, sum;
    
    int k;

    printf("Enter lower and upper limit : ");
    scanf("%f%f",&x0,&xn);

    printf("Enter number of segments: ");
    scanf("%d",&k);

    h = (xn - x0)/k;

    fx0 = f(x0);
    fxn = f(xn);

    int i;

    sum =0;

    for( i = 1; i <= k-1; i= i+2) //i = odd case
    {
        sum = sum + 4*(f(x0 +(i*h)));
    }


    for(i =2; i<= k-2; i = i+2){ //i = even case
        sum = sum + 2*(f(x0 + (i*h)));
    }
     
    //adding all values for odd + even and first and last item

    result = (f(x0) + sum + f(xn))*h/3;

    printf("%f\n", result);

    return 0;
}



