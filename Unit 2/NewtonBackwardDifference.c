#include<stdio.h>
#include<math.h>

int main(void)
{
    int n,i,j;
    float xp,xn,h,s;
    float x[10], fx[10];

    printf("Enter the number of elements to be inserted :");
    scanf("%d",&n);

    printf("Enter the value x = ");
    scanf("%f",&xp);

    printf("Enter elements one by one :\n");

    
    for( i = 0; i < n; i++)
    {
        printf("x[i] = ");
        scanf("%f",&x[i]);

        printf("fx[i] = ");
        scanf("%f",&fx[i]);

    }
    

    xn =x[n-1];l
    h = x[1] -x[0];
    s = (xp-xn)/h;


}