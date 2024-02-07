#include <stdio.h>
int main() {
    int arr[100], n, i, j, Unique;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are :\n");
    for (i = 0; i < n; i++) {
        Unique = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                Unique = 0; 
                break;
            }
        }
        if (Unique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
   return 0;
}

