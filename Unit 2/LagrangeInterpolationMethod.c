//Newton Interpolation Method

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x[10],fx[10],lx[10];
    float p,v=0,temp=1;
    int i,j;


    printf("Enter number of points: ");
    scanf("%d",&n);


    printf("Enter the value at of x, at which the value is needed: ");
    scanf("%f",&p);

    printf("Enter the data points one by one :\n");
    for(i=0;i<n;i++)
    {
        printf("Enter value of x(%d) : ",i);
        scanf("%f",&x[i]);

        printf("Enter value of f(%d) : ",i);
        scanf("%f",&fx[i]);
    }


    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            if(j != i)
            {
                temp = temp * ((p-x[j])/(x[i] -x[j]));
            }

        }
         lx[i] = temp;
    }



    for( i = 0; i < n; i++)
    {
        v =v + (fx[i] * lx[i]);
    }


    printf("\n\nWhen x = %.2f then , f(%.2f) = %.2f ",p,p,v);

}
