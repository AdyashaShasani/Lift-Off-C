//ASSIGNMENT-5 :
//Q.5 :
//Adyasha Shasani_ETC_1st year

#include<stdio.h>
int check_palindrome(int num)
{
   static int reverse_num=0,rem;

   if(num!=0)
    {
      rem = num%10;
      reverse_num = reverse_num*10+rem;
      check_palindrome(num/10);
    }

   return reverse_num;
}
int main()
{
   int num, reverse_num;

   printf("Enter a number: \n");
   scanf("%d",&num);

   reverse_num = check_palindrome(num);

   if(num==reverse_num)
      printf("%d is a palindrome number.\n",num);
   else
      printf("%d is not a palindrome number.\n",num);

   return 0;
}
