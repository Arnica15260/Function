//Find a number is armstrong or not...
#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
    int temp=n,rem,sum=0,digit;
    digit=floor(log10(temp)+1);
    while(temp!=0){
        rem=temp%10;
        sum=sum+pow(rem,digit);
        temp=temp/10;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int result=armstrong(n);
    if(result==1)
        printf("%d is armstrong number\n",n);
    else
        printf("%d is not a armstrong number\n",n);
    return 0;
}
