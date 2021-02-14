//ASSIGNMENT-2 :
//Q.2 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
int main()
{
    int a[10], i, sum=0;
    printf("Enter any 5 numbers :\n");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);

    for(i=0; i<5; i++)
    {
        if(a[i]%2 == 0)
        sum = sum + a[i];
    }

    printf("\nTotal sum of even elements is : %d",sum);

    return(0);
}
