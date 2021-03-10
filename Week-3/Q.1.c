//ASSIGNMENT-3 :
//Q.1 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
int square(int);
int main()
{
    int num, result;
    printf("Enter any number : \n");
    scanf("%d", &num);

    result = square(num);

    printf("Square of %d is %d\n", num, result);

    return(0);
}
int square(int n)
{
    return(n*n);
}
