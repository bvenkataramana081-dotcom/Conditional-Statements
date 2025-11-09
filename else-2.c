//check vowel and consonant

#include<stdio.h>
int main ()
{
    char n;
    char  a = 'a';
    char  e = 'e';
    char  i = 'i';
    char  o = 'o';
    char  u = 'u';

    printf("ENTER VOWELS :");
    scanf("%c",&n);
    if(n == a)
    {
        printf(" vowels = %c",n);
    }
    else if(n == e)
    {
        printf("vowels = %c",n);
    }
    else if(n == i)
    {
        printf("vowels = %c",n);
    }
    else if (n == o)
    {
        printf("vowels = %c",n);
    }
    else if(n == u)
    {
        printf("vowels = %c",n);
    }
    else
    {
        printf(" consonant =  %c",n);
    }
    return 0;
}