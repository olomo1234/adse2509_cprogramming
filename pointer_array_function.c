#include <stdio.h>

int main() {
 int arr[5];
 int size = 5;
 int i; // for looping

 // 1. Reads 5 integers from the user into an array.
 printf("Enter 5 integers:\n");
 for (i = 0; i < size; i++) {
 printf("Enter element %d: ", i + 1);
 scanf("%d", &arr[i]);
 }


// 2.Function to calculate the sum of array elements using pointers
 int find_sum(int *arr, int size) {
 int sum = 0;
 for (i = 0; i < size; i++) {
 sum += *(arr + i); // Dereference the pointer to get the value
 }
 return sum;
 }

// 3.Function to find the maximum value in the array using pointers
 int find_max(int *arr, int size) {
 int maxVal = *arr; // Initialize maxVal with the first element
 for (i = 1; i < size; i++) {
 if (*(arr + i) > maxVal) {
 maxVal = *(arr + i);

 }
 }
 return maxVal;
 }

// 4.Function to search for a value in the array using pointers
 int search_value(int *arr, int size, int key) {
 for (i = 0; i < size; i++) {
 if (*(arr + i) == key) {
 return i; // Return the index if found
 }
 }
 return -1; // Return -1 if not found
 }


 // 5.Call all the above functions and display results
 int sum = find_sum(arr, size);
 printf("\nSum of array elements: %d\n", sum);

 int maxVal = find_max(arr, size);
 printf("Maximum value in the array: %d\n", maxVal);

 int searchKey;
 printf("Enter a value to search: ");
 scanf("%d", &searchKey);

 int searchIndex = search_value(arr, size, searchKey);
 if (searchIndex != -1) {
 printf("Value %d found at index: %d\n", searchKey, searchIndex);
 } else {
 printf("Value %d not found in the array.\n", searchKey);
 }

 return 0;
 }

