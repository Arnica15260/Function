//Program to find maximum between two numbers using functions...
#include<stdio.h>
void maximum(int num1,int num2)
{int max;
    if(num1>num2)
        max=num1;
    else
        max=num2;
        printf("Maximum is %d",max);
}
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    maximum(num1,num2);
    return 0;
}
