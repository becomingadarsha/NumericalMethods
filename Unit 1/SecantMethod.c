#include<stdio.h>
#include<math.h>

#define f(x) (pow(x,4) - (2*pow(x,3)) - x - 3)
#define E 0.05

int main(void){

    int count=0;
    float x0,x1,fx0,fx1,error,x2;

    printf("Enter value of x0: ");
    scanf("%f",&x0);


    printf("Enter value of x1: ");
    scanf("%f",&x1);

    do{
        count++;
   	    fx0=f(x0);
        fx1=f(x1);
        x2=x1-((fx1*(x1-x0))/(fx1-fx0));
        error=fabs((x2-x1)/x2);

        x0=x1;
      
        x1=x2;
        

    }while(error>E);

    
        printf("Iteration : %d \n", count);
        printf("Root : %f \n", x2);
        printf("Error : %f \n", error);
  
    
  
    }