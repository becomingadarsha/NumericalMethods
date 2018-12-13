#include<stdio.h>
#include<math.h>

#define E 0.05
#define g(x) pow(2.71828,-x)

int main()
{

    float x0,x1,error;
    int count=0;

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    do{
        x1 = g(x0);
        count++;
       error = fabs((x1-x0)/x1);
       x0 = x1;
    }
    while(error>E);

    printf("Iteration\t Root(x0)\t x1\t E\n");
    printf("%d\t\t %.2f\t\t %.2f\t %.2f\n",count,x0,x1,error);


}