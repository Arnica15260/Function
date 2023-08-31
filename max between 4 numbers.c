//Find maximum form 4 integers:
#include<stdio.h>
int max(int num1,int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}
int main()
{
    int a,b,c,d,m;
    printf("Enter 4 integers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    m=max(d,max(c,max(a,b)));
    printf("Maximum is %d\n",m);
    return 0;
}

