//Write a program in C to print all perfect numbers in a given range using the function...
#include<stdio.h>
int perfect(int n)
{
    int i,sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0){
            sum=sum+i;}

    }
    return (sum==n);
}
void isPerfect(int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        if(perfect(i)){
            printf("%d\t",i);
        }
    }
}
int main()
{
    int start,end;
    printf("Enter the range: ");
    scanf("%d%d",&start,&end);
    isPerfect(start,end);
    return 0;
}

