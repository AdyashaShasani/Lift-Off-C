//ASSIGNMENT-1 Q.3 :-
//Adyasha Shasani_ETC_1st year

#include <stdio.h>

int main()
{
    int a, b;
    float c, d;
    printf("Enter the radius of the circle.\n");
    scanf("%d", &a);

    b = 2 * a;
    printf("If the radius of the circle is %d cm, then its diameter will be %d cm.\n\n", a,b);

    c = 2 * 3.14 * a;
    printf("The perimeter of a circle of radius %d cm is equal to %f cm.\n\n", a,c);

    d = 3.14 * a * a;
    printf("The area of a circle of radius %d cm is equal to %f cm^2.\n\n", a,d);

    return(0);
}
