//check positive ,negative, and zero

#include<stdio.h>
int main ()
{
    int n;
    printf("ENTER NUMBER :");
    scanf("%d",&n);
    if(n>1)
    {
        printf("POSITIVE NUMBER = %d",n);
    }
    else if(n<0)
    {
        printf("NEGATIVE NUMBER  = %d",n);
    }
    else
    {
        printf("ZERO = %d",n);
    }
    return 0;
}