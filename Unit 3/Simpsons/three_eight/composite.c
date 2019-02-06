#include<stdio.h>
#include<math.h>

#define f(x) (1/(x+4))

int main(int argc, char const *argv[])
{
    float x0, xn; //lower and upper limit   
    float h,sum =0 ;
    int k;
    
   printf("Enter value of lower and upper limit : ");
    scanf("%f%f",&x0,&xn);

    printf("Enter number of segments : ");
    scanf("%d",&k);

    h = (xn - x0)/k;

    for(int i = 1; i <= k-1; i++)
    {
       if (i%3 == 0) { //multiple of 3
           sum = sum + 2*(f(x0 + (i*h))); 
       }
       else { //non multiple of 3
            sum = sum + 3*(f(x0 + (i*h)));
       }
       
    }
    

    float result;

    result = 3/8.0 *h * (f(x0) + sum + f(xn));

    printf("Integration is %f\n", result);



    return 0;
}
