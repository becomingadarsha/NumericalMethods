#include<stdio.h>
#include<math.h>

#define E 0.05
#define f(x) ((4*x*x*x) -(2*x) -6)
#define f1(x) ((12*x*x) -2)

int main(void){
    
    int count=0;
    float x0,fx0,fx1,x1,error;

    printf("Enter value of x0: ");
    scanf("%d",&x0);

    

    start:
        count++;

    fx0= f(x0);
    fx1=f1(x0);
    x1=x0-(fx0/fx1);
    error=fabs((x1-x0)/x1);
    x0=x1;

    if(error<E){
         printf("\n Root of the equation is: %f",x1);
          printf("\n Error: %f ",error);
    }

    else{
        goto start;
    }
    
    return 0;
}