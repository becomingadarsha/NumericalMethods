//Bisection Method
#include<stdio.h>
#include<math.h>

#define E 0.05
#define f(x) ((x*x*x) + (x) - 3)
int main(void)
{
	
	int count=0;
	float xm,x1,x2,f0,f1,f2;

	printf("Enter the value of Xu: ");
	scanf("%f",&x1);
	printf("Enter the  of Xl: ");
	scanf("%f",&x2);

	f1=f(x1);
	f2=f(x2);

	if(f1*f2>0){
         printf("Root doesn't exits between Xl and Xu");
    }

	else{
			start:
				count++;
			xm=(x1+x2)/2;
			f0=f(xm);
			
			if((f1*f0)<0){
                x2=xm;
            }
				
			else{
				x1=xm;
				f1=f0;
			}

			if(fabs((x2-x1)/x1)<E){

				xm=(x1+x2)/2;
                printf("\n Iteration Steps = %d",count);
				printf("\n Root = %f",xm);
				printf("\n Functional Value = %f",f0);
                printf("\n Error = %f ",fabs(x2-x1)/x1);
			}

			else{
				
				goto start;
			}
			
		}

		return 0;
}
