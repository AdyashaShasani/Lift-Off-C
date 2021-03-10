//ASSIGNMENT-3 :
//Q.2 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
int main()
{
    printf("Enter any number to find factorial :\n ");
    printf("Factorial of the given number is : %d\n ",fact());
    return(0);
}
int fact()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
