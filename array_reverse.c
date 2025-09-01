#include<stdio.h>
int main(){
    int arr[100],n,k;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("\nenter the elements\n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }
   int i=0, j=n-1;
   while(i<j)
   {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        i++;
        j--;
   }
    printf("the reversed array is\n");
    for(k=0;k<n;k++)
    {
        printf("%d\t",arr[k]);
    }
    return 0;
}