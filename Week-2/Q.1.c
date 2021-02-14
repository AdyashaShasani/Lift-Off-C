//ASSIGNMENT-2 :
//Q.1 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
int main()
{
    int num,remainder,sum=0;
    printf("Enter any number :\n");
    scanf("%d", &num);

    while(num>0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("\nSum of the digits in the given number : %d\n", sum);
    return(0);
}
