```C
#include <stdio.h>
#include <stdlib.h>

int main() {
	missingNumber(50);
	dublicateNumber();
	maxMinNumber();
	findPairs();
	findMultipleDuplicates();
	removeDuplicate();
	searchRotated();
	findLongest();
	quicksort();
	byteToString();
	binarySearch();
	findMedian();
	rotateArray();
	findStartEnd();
	contiguousSubarray();
	
	return 0;
}
```
### How do you find the missing number in a given integer array of 1 to 100? 
```C
void missingNumber(int num) {
	int arr[100];
	int i;
	for (i = 0; i < 100; i++) {
		if (i == num) {
			arr[i] = 0;
		} else {
			arr[i] = i + 1;
		}
	}
	
	for (i = 0; i < 100; i++) {
		if (arr[i] != i + 1) {
			printf("Error %ith element is not correct!", i);
		}
	}
}
```
### How do you find the duplicate number on a given integer array? 
```C
void dublicateNumber() {
	int arr[5] = {5, 2, 7, 9, 2};
	
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (arr[i] == arr[j]) {
				printf("Dublicate: %d   ", arr[i]);
			}
		}
	}
}
```
### How do you find the largest and smallest number in an unsorted integer array?  
```C
void maxMinNumber() {
	int arr[5] = {1, 6, 3, 7, 4};
	int maxValue = arr[0];
	int minValue = arr[0];
	
	int i;
	for (i = 1; i < 5; i++) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}
	
	printf("min value: %d, max value: %d", minValue, maxValue);
}
```
### How do you find all pairs of an integer array whose sum is equal to a given number?  
```C
void findPairs() {
	int arr[6] = {9, 12, 15, 4, 8, 1};
	int find = 13;
	
	int i, j;
	for (i = 0; i < 6; i++) {
		for (j = i + 1; j < 6; j++) {
			if (arr[i] + arr[j] == find) {
				printf("%d + %d == 13. Cong!   ", arr[i], arr[j]);
			}
		}
	}
}
```
### How do you find duplicate numbers in an array if it contains multiple duplicates?
```C
void findMultipleDuplicates() {
	int arr[5] = {5, 2, 7, 5, 2};
	
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (arr[i] == arr[j]) {
				printf("Dublicate: %d   ", arr[i]);
			}
		}
	}	
}
```
### How to remove duplicates from a given array?
```C
void removeDuplicate() {
	int arr[6] = {5, 7, 2, 5, 9, 3};
	int len = 6;
	
	int i, j, k;
	for (i = 0; i < len - 1; i++) {
		for (j = i + 1; j < len; j++) {
			if (arr[i] == arr[j]) {
				for (k = j; k <= len; k++) {
					arr[k] = arr[k + 1];
				}
				arr[len - 1] = 0;
				len--;
			}
		}
	}
	
	for (i = 0; i < 6; i++) {
		printf("%d, ", arr[i]);
	}
}

```
### How do you search a target value in a rotated array?
```C
void searchRotated() {
	
}
```
### Given an unsorted array of integers, find the length of the longest consecutive elements sequence? 
```C
void findLongest() {
	
}
```
### How is an integer array sorted in place using the quicksort algorithm?
```C
void quicksort() {
	
}
```
### How do you remove duplicates from an array in place?  

// removeDuplicate(); 

### How do you reverse an array in place?
```C
void reverseArray() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = 10;
	
	int i, tmp;
	for (i = 0; i < len / 2; i++) {
		tmp = arr[i];
		arr[i] = arr[len - (i + 1)];
		arr[len - (i + 1)] = tmp;
	}
	
	for (i = 0; i < len; i++) {
		printf("%d, ", arr[i]);
	}
}
```
### How are duplicates removed from an array without using any library?

// removeDuplicate();

### How to convert a byte array to String?  
```C
void byteToString() {
	int buf[] = {0, 3, 12, 11, 15};
	
	int i;
	for (i = 0; i < 5; i++)
	{
    	if (i > 0) printf(":");
    	printf("%02X", buf[i]);
	}
	printf("\n");
}
```
### What is the difference between an array and a linked list? (answer)

 The major difference between Array and Linked list regards to their structure. 
Arrays are index based data structure where each element associated with an index. ... 
While a linked list is a data structure which contains a sequence of the elements where each element is linked to its next element.

### How do you perform a binary search in a given array?
```C
void binarySearch() {
    int size = 8;
    int arr[size] = {5, 9, 15, 7, 21, 83, 4, 6};
    int var = 15;
	
    int mid_value = (fir_value + last_value) / 2;

    if (var == arr[mid_value])
    {
        printf("%i found.\n", var);
    }
    else if (var < arr[mid_value])
    {
        last_value = mid_value;
        binary_search(arr, size, var);
    }
    else if (var > arr[mid_value])
    {
        fir_value = mid_value;
        binary_search(arr, size, var);
    }
    else
    {
        printf("%i Not found.\n", var);
    }
}
```
### How to find a median of two sorts arrays?
```C
void findMedian() {
	
}
```
### How to rotate an array left and right by a given number K?
```C
void rotateArray() {
	
}
```
### How do you find duplicates from an unsorted array? 

// findDuplicate();

### Given an array of integers sorted in ascending order, find the starting and ending position of a given value?
```C
void findStartEnd() {
	
}
```
### Given an integer array, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum?
```C
void contiguousSubarray() {
	
}
```
