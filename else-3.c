// check uppercase and lowercase and special character

#include<stdio.h>
int main ()
{
   char  n;
   printf("Enter character :");
   scanf("%c",&n);
   if((n>='A' && n<='z' ) || (n>="a" && n<="z"))
  {
    printf("Alphabet ascii value %c",n);
  }
   else if (n>="0" && n<='9')
  {
      printf("Digit ascii value %c",n);
  }
  else
  {
    printf("special character = %c",n);
  }
 

    return 0;
}