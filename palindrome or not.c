//Write a function to check if a given number is a palindrome using the function.
#include<stdio.h>
int findpalindrome(int n)
{
    int rem,reverse=0,orginal=n;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(reverse==orginal)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a integer number: ");
    scanf("%d",&n);
    int result=findpalindrome(n);
    if(result==1)
        printf("%d is a palindrome number",n);
    else
        printf("%d is not a palindrome number",n);
    return 0;
}


