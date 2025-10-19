#include <stdio.h>
#include "arraylib.h"

// #Cp
// just display array
void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// find index of biggest value
int findMaxIndex(int arr[], int size) {
    int maxI = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxI])
            maxI = i;
    }
    return maxI;
}

// find index of smallest value
int findMinIndex(int arr[], int size) {
    int minI = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minI])
            minI = i;
    }
    return minI;
}

// find avg of all elements
float findAverage(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
        total += arr[i];
    return (float) total / size;
}

// reverse array elements
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }
}

// basic bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// linear search, returns index or -1
int linearSearch(int arr[], int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val)
            return i;
    }
    return -1;
}
