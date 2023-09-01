//Write a program in C to get the 2nd largest element of an array using the function.
#include<stdio.h>
void find_second_max(int a[],int n)
{
    int max1,max2;
    if(a[0]>a[1]){
        max1=a[0];
        max2=a[1];
    }
    if(a[1]>a[0]){
        max1=a[1];
        max2=a[0];
    }
    for(int i=1;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2){
            max2=a[i];
        }

    }
    printf("First largest element is %d\n",max1);
    printf("Second largest element is %d\n",max2);

       return 0;

}
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   find_second_max(a,n);
    return 0;
}
