//Find the prime number in a range using function 1-N...
#include<stdio.h>

int isprime(int num)
{
    if(num<=1)
        return 0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int start,end;
    printf("Enter start and end value of the range: ");
    scanf("%d%d",&start,&end);
    printf("prime number between %d and %d:\n",start,end);
    for(int i=start;i<=end;i++){
        if(isprime(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
