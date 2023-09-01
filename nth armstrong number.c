//find nth armstrong number...
#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int count=1;
    for(int i=1;i<=1000000000;i++){
        int temp=i,rem,sum=0,digit;
        digit=floor(log10(temp)+1);

        while(temp!=0){
            rem=temp%10;
            sum=sum+pow(rem,digit);
            temp=temp/10;
        }
        if(sum==i){
            if(count==n)
                return i;
            else
                count++;
        }
    }
}
int main()
{
    int n;
    printf("Enter n to find nth armstrong number(range: 1-31): ");
    scanf("%d",&n);
    int result=armstrong(n);
    printf("%d\n",result);


}
