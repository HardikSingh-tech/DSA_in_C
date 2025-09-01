#include<stdio.h>
void ar(int [],int);
int main(){
    int a[100],i,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("\nEnter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ar(a,n);
}
void ar(int r[],int c)
{
    int i;
    for(i=0;i<c;i++)
    {
        printf("%d",r[i]);
    }
}