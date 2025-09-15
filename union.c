#include <stdio.h>
#define MAX_SIZE 100

void printUnion(int arr1[], int n1, int arr2[], int n2) {
    int unionArr[MAX_SIZE];
    int i, j, k = 0, found;

   
    for (i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

   
    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

int main() {
    
    
    int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printUnion(arr1, n1, arr2, n2);

    return 0;
}