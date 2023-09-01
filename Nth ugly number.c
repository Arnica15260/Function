//find nth ugly number...
#include<stdio.h>
int ugly(int i)
{
    while(i%2==0)
        i=i/2;
    while(i%3==0)
        i=i/3;
    while(i%5==0)
        i=i/5;
    if(i==1)
        return 1;
    else
        return 0;
}
int findugly(int n)
{
    int i=1, count=1;
    while(n>count)
    {
        i++;
        if(ugly(i))
            count++;
    }
    return i;
}
int main()
{
    int n;
    printf("Enter value of n to find nth ugly number: ");
    scanf("%d",&n);
    int result=findugly(n);
    printf("%dth ugly number is %d\n",n,result);
    return 0;

}
