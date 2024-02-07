#include <stdio.h>
int main() {
   int arr[100], n, i, indexToDelete;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }

   printf("Enter the index of the element to delete: ");
   scanf("%d", &indexToDelete);

   if (indexToDelete < 0 || indexToDelete >= n) {
       printf("Invalid index to delete.\n");
       return 0;
   }
   for (i = indexToDelete; i < n - 1; i++) {
       arr[i] = arr[i + 1];
   }
   n--;

   printf("Array after deletion:\n");
   for (i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;
}

