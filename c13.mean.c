#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}

int main() {
   int n, i;
   float median;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter the elements:\n");
   for(i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   qsort(arr, n, sizeof(int), cmpfunc);
   if(n%2==0) {
      median = (float)(arr[n/2-1]+arr[n/2])/2.0;
   }
   else {
      median = (float)arr[n/2];
   }
   printf("The median is: %f", median);
   return 0;
}

