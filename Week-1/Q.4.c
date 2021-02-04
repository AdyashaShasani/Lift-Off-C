//ASSIGNMENT-1 Q.4 :-
//Adyasha Shasani_ETC_1st year

#include <stdio.h>

int main()
{
    int phy, chem, bio, maths, comp;
    float a, Total;
    printf("Enter your marks :-\n\n");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &maths, &comp);

    Total = phy + chem + bio + maths + comp;
    a = (Total/500)/*100;
    printf("Percentage = %f\n\n", a);

    if (a>=90)
    {
        printf("You have got a Grade-A.");

    }
    else if (a>=80 && a<90)
    {
         printf("You have got a Grade-B.");
    }
    else if (a>=70 && a<80)
    {
        printf("You have got a Grade-C.");
    }
    else if (a>=60 && a<70)
    {
        printf("You have got a Grade-D.");
    }
    else if (a>=40 && a<60)
    {
        printf("You have got a Grade-E.");
    }
    else if (a<40)
    {
        printf("You have got a Grade-F.");
    }

    return(0);
}
