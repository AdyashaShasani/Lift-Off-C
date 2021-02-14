//ASSIGNMENT-2 :
//Q.5 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows :");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j||i+j==(n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    return(0);
}
