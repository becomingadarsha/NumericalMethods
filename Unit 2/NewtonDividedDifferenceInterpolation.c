//Newton Divided Difference Interpolation

#include<stdio.h>
#include<math.h>

int main(void)
{
    int n,i,j;
    float val,p,v;
    float x[30],fx[30],dd[30];
    
    
    
    printf("How many numbers ? ");
    scanf("%d",&n);

    printf("Enter the value at which interpolated result is needed : ");
    scanf("%f",&val);

    printf("\n\nEnter the values one by one :\n");

    for(i=0;i<n;i++)
    {
        printf("x[%d] : ",i);

        scanf("%f",&x[i]);


        printf("fx[%d] : ",i);

        scanf("%f",&fx[i]);
    }

    
    for( i = 0; i < n; i++)
    {
        dd[i] = fx[i];
    }
    
    
    for( i = 0; i < n; i++)
    {
       
       for( j = n-1; j > i; j--)
       {
          dd[j] = ((dd[j] - dd[j-1])/(x[j] - x[j-1-i]));
       }

    }

    v =0;
    
    for( i = 0; i < n; i++)
    {
          p=1;
        for( j = 0; j < i-1; j++)
        {
           p =  p * (val - x[j]);
        }

        v = v + dd[i] *p;
        
    }

    printf("\n\nInterpolated value is :\n");
    printf("When x = %.2f then f(%.2f) = %f",val,val,v);


    return 0;

      
}

