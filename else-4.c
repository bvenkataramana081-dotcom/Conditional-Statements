//name find from marks

#include<stdio.h>
int main ()
{
    char name[30];
    int marks;
    printf("Enter your Name :");
    scanf("%s",name);
    printf("Enter your Marks :");
    scanf("%d",&marks);
    if(marks>=90 && 100<=marks)
    {
        printf("A+ Excellent =  %d",marks);
    }
    else if(marks>=80 && 90<=marks)
    {
        printf(" A Very Good =  %d",marks);
    }
    else if(marks>=70 && 80<=marks)
    {
        printf("B Good  = %d",marks);
    }
    else if(marks>=60 && 70<=marks)
    {
         printf("C Average  = %d",marks);
    }
    else if(marks>=50 && 60<=marks)
    {
        printf(" D Pass  = %d",marks);
    }
    else if(marks>=40 && 50<=marks)
    {
        printf("e  Just pass  = %d",marks);
    }
    else
    {
        printf("Fail  = %d",marks);
    }
    return 0;
}