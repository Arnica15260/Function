//Write a program in C to display the first n terms of Fibonacci series using the
//function.
#include<stdio.h>
void fibonacci(int n)
{
    int first=0,second=1,next;
    printf("Fibonacci series of %d terms: \n",n);
    for(int i=0;i<n;i++){
    if(i<=1){
        next=i;
    }
    else
    {
        next=first+second;
        first=second;
        second=next;
    }
    printf("%d\t",next);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the value n: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
