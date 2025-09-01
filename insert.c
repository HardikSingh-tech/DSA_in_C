#include<stdio.h>
int main(){
    int arr[100],n,i,temp;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("\nenter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nshifting elements\n");
   
    for(i=n-1;i<=0;i--)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int e;
    printf("\nenter the element");
    scanf("%d",&e);
    temp=i;
    for(i=n-2;i>=temp;i--)
    {
        if(arr[i]<e)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            break;        }
            
    }
   
    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    


}