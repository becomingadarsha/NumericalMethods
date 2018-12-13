/*
    1. Start
    2. Enter degree of polynomial, say n
    3. Enter the value at which polynomial to be evaluated, x
    4. Iitially set bn= an;
    5. While n>0
        b[n-1] = a[n-1] +b[n]*x
    6. End while
    7. Display the value of b[0], which is the value of x
    8. Terminate
    
*/

#include<stdio.h>
#include<math.h>

#define p(x) (3*pow(3,x)) -(4*pow(x,2))+ 5x - 6
int main()
{
    int a[100],b[100];
    int i, n,x;

    printf("Enter degree of polynomial: ");
    scanf("%d", &n);

    printf("Enter coffecients of divident: \n");
    for(i=n;i>=0;i--)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the value at which the polynomial is to be evaluated: ");
    scanf("%d",&x);

    b[n]=a[n];

    while(n>0)
    {
        b[n-1] = a[n-1] +(b[n]*x);
        n--;
    }

    printf("Value of p(%d) is %d", x, b[0]);
    return 0;

}