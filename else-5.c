//smallest among three number

#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter a Number :");
    scanf("%d",&a);
    printf("Enter b Number :");
    scanf("%d",&b);
    printf("Enter c Number :");
    scanf("%d",&c);
    if(a<b)
    {
        printf("A Smallest  = %d",a);
    }
    else if(b<c)
    {
        printf("B Smallest = %d",b);
    }
    else
    {
        printf("C Smallest = %d",c);
    }

    return 0;
}