//ASSIGNMENT-1 Q.1 :-
//Adyasha Shasani_ETC_1st year

#include<stdio.h>

    int main()
    {
        int a,b,c;

        printf("Enter any two numbers.\n");
        scanf("%d %d", &a, &b);
        c = a + b;
        printf("a + b = %d \n",c);
        c = a - b;
        printf("a - b = %d \n",c);
        c = a * b;
        printf("a * b = %d \n",c);
        c = a / b;
        printf("a / b = %d \n",c);
        c = a % b;
        printf("The remainder when a divided by b = %d \n",c);

        return(0);
    }
