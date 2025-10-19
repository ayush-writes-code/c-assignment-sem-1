#include <stdio.h>
#include "arraylib.h"

// #Cp
void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int findMaxIndex(int arr[], int size) {
    int maxIdx = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    return maxIdx;
}

int findMinIndex(int arr[], int size) {
    int minIdx = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] < arr[minIdx]) minIdx = i;
    return minIdx;
}

float findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (float)sum / size;
}

void reverseArray(int arr[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return i;
    return -1;
}
