//Find Maximum number from the array...
#include<stdio.h>
int findmax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxnumber=findmax(arr,n);
    printf("Tne maximum number is %d\n",maxnumber);
    return 0;
}
