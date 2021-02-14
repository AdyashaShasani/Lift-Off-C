//ASSIGNMENT-2 :
//Q.3 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
  	int i, totalwords;
  	totalwords = 1;
  	i = 0;

  	printf("Enter any string :\n");
  	gets(str);

  	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;
		}
		i++;
	}
	printf("\nThe total number of words in this string %s  = %d", str, totalwords);

    return(0);
}
