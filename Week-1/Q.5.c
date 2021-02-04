//ASSIGNMENT-1 Q.5 :-
//Adyasha Shasani_ETC_1st year

#include <stdio.h>

int main()
{
    char chr;
    printf("Enter any English alphabet :-\n");
    scanf("%c", &chr);

    switch (chr)
    {
    case 'a':
        printf ("%c is a vowel.", chr);
        break;
    case 'A':
        printf ("%c is a vowel.", chr);
        break;
    case 'e':
        printf ("%c is a vowel.", chr);
        break;
    case 'E':
        printf ("%c is a vowel.", chr);
        break;
    case 'i':
        printf ("%c is a vowel.", chr);
        break;
    case 'I':
        printf ("%c is a vowel.", chr);
        break;
    case 'o':
        printf ("%c is a vowel.", chr);
        break;
    case 'O':
        printf ("%c is a vowel.", chr);
        break;
    case 'u':
        printf ("%c is a vowel.", chr);
        break;
    case 'U':
        printf ("%c is a vowel.", chr);
        break;
    default:
        printf ("%c is a consonant.", chr);
        break;
    }
    return(0);
}
