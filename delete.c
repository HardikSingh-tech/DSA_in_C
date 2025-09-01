#include<stdio.h>
int main(){
    int arr[100],n,i,temp=0,e;
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
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    printf("enter the element to be deleted");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(arr[i]==e)
        {    temp=1;
            break;
        }
    }
    if(temp==0)
    {
        printf("element not found");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("the array after deletion is\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}