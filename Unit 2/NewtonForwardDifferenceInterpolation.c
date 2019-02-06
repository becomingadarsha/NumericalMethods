//Newton forward difference interpolation

#include<stdio.h>
#include<math.h>
int fact(int);

int main(void)
{
    int i,j,n;
    float xp, h, s,v,p,k;
    float x[30],fx[30],fd[30];

    printf("How many elements ? ");
    scanf("%d",&n);

    printf("Enter value at which the interpolation is needed : ");
    scanf("%f",&xp);

    printf("Enter value one by one :\n");

    
    for( i = 0; i < n; i++)
    {
        printf("x[%d] = ",i);
        scanf("%f",&x[i]);

        printf("fx[%d] = ",i);
        scanf("%f",&fx[i]);
    }
    
    h = x[1] -x[0]; // calculation of height
    s = (xp - x[0])/h;

    
    for( i = 0; i < n; i++)
    {
      
        for( j = n-1; j > i; j--)
        {
          fd[j] = fd[j] + fd[j-1];
        }
        
    }
    

    
    v= fd[0];
    for( i = 1; i < n; i++)
    {
        p = 1;
       for(k =1 ; k<=i ;k++)
        {
            p = p* (s-k+1);
        }
        
        v = v + (fd[i] *p)/fact(i);

    }
    
    printf(" At xp = %f , then interpolated value is %.3f",xp,v);



}

int fact(int n)
{
    if( n== 0)
    {
        return 1;
    }

    else{
        return(n* fact(n-1));
    }
}