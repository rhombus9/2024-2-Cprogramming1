#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArr(int arr1[], int arr2[]) {
	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\narr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n\n");
}


int main(void) {

	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int *ptr1 = arr1, *ptr2 = arr2;
	int temp;

	printArr(arr1, arr2);

	for (int i = 0; i < 6; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2++;
	}

	printf("after swap\n");
	printArr(arr1, arr2);

	return 0;
}