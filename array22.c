#include<stdio.h>
int main()
{
    int i,n,a[100],temp;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    
    printf("shifting elements\n");
    

    for(i=n-1;i<=0;i--)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int pos,e;
    printf("\nenter the position to be inserted\n");
    scanf("%d",&pos);
    printf("enter the element to be inserted\n");
    scanf("%d",&e);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=e;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }

}