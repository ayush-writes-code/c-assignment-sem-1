#include <stdio.h>
#include "arraylib.h"



void showArray(int arr[], int size)
{
   
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}


int findMaxIndex(int arr[], int size)
{
    int maxI = 0;
    for(int i = 1; i < size; i++)
    {
       
        if(arr[i] > arr[maxI])
            maxI = i;
    }
    return maxI;
}


int findMinIndex(int arr[], int size)
{
    
    int minI  = 0;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < arr[minI])
            minI = i;
    }
    
    return minI;
}


float findAverage(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)

        
        sum += arr[i];

    return (float)sum / size;
}


void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while(start <end)
        
    {
        int temp =arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void sortArray(int arr[], int size)
{
    int i, j, temp;
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
    {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
     }
        } }
}


int linearSearch(int arr[], int size, int val)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == val)
            return i;
    } return -1;
}
