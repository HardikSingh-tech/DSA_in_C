#include<stdio.h>
void inputArray(int a[], int n) {
    printf("Enter element"); 
    for(int i = 0; i < n; i++) {
        
        scanf("%d", &a[i]);
    }
}
void inputArray2(int b[],int m){
    printf("enter element");

    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
}
void mergearray(int a[], int n, int b[], int m, int c[], int size){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    for(k=0; k<(size = n + m);k++){
        printf("\t%d",c[k]);
    }
}
int main(){
    int n, m;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int a[n];
    inputArray(a, n);

    printf("Enter size of second array: ");
    scanf("%d", &m);
    int b[m];
    inputArray2(b, m);

    int c[n + m];
    mergearray(a, n, b, m, c, n + m);
    
}
    