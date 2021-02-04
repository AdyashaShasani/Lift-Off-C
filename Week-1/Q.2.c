//ASSIGNMENT-1 Q.2 :-
//Adyasha Shasani_ETC_1st year

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter any temperature in degrees celsius.\n");
    scanf("%d", &a);

    b = (a * 9/5) + 32;
    printf("%d degrees celsius temperature is equal to %d degrees fahrenheit.", a, b);

    return (0);
}
