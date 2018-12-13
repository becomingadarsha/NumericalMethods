/*
Needed to print: 
    Polynomial and Remainder

    p(x) = polynomial divided by (x-a) we get anonther polynomial q(x)
    q(x) = Next polynomial of power(n-1)


    Algorithm:
   1. Input coefficients of dividend polynomial, say an,an-1,an-1....a0
    2. Input constant terms of divisior polynomial x-a
    3. Set bn=0
    4. Repeat till n>0
        b(n-1)= an+ bn*c
    5. Remainder R(a0 + b0 * c)
    6. Print quotient polynomial and Remainder
    7. Terminate

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a[100]; //dividend
    int b[100]; // quotient

    int i,con,deg,n,rem; //n = deg of polynomial ; n = term to decrease coff position by 1

    printf("Enter the degree dividend: ");
    scanf("%d",&deg);

    printf("Enter coffecients of dividend polynomial : \n");
    for(i=deg;i>=0;i--)
    {   
        scanf("%d",&a[i]);
    }

    printf("Enter constant term of divisior polynomial: ");
    scanf("%d",&con);
    
    b[deg]=0;
    n = deg;

    while(n>0)
    {
        b[n-1] = a[n] + b[n]*con;
        n--;
    }

    printf("Quotient: \n");

    n = deg-1;
    while(n>=0)
    {
        if(b[n] != 0)
        {
         printf("%dx^%d+",b[n],n);

        }
        n--;
    }

    rem = a[0] +b[0]*con;
    printf("\nRemainder =  %d",rem);

}



