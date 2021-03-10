//ASSIGNMENT-5 :
//Q.4 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter any number : \n");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n", n, fact(n));
    return(0);
}

int fact(int n)
{
    if (n>=1)
        return(n * fact(n-1));
    else
        return(1);
}
