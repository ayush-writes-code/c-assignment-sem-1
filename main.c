
#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

// #Cp
int main() {
    int choice, n;

    while (1) {
        
        printf("\n======= MENU =======\n");
        printf("1. Armstrong Check\n");
        printf("2. Adams Check\n");
        
        printf("3. Prime Palindrome Check\n");
        printf("4. Test Array Functions\n");
        printf("5. Exit\n");
        printf("Enter choice: ");

        
        scanf("%d", &choice);
        

        if (choice == 5) {
            printf("Program Ended.\n");
            break;
        }

        if (choice >= 1 && choice <= 3) {
            printf("Enter number: ");
            scanf("%d", &n);
        }

        switch (choice) {
        case 1:
            printf(isArmstrong(n) ? "Yup! Armstrong \n" : "Nope, not Armstrong \n");
            break;
        case 2:
            printf(isAdams(n) ? "Adams Number confirmed \n" : "Not Adams \n");
            break;
        case 3:
            printf(isPrimePalindrome(n) ? "Prime & Palindrome — rare combo!\n" : "Nope, not both.\n");
            break;
        case 4: {
            int arr[] = {3, 1, 4, 1, 5};
            int len = 5;
            printf("Original: ");
            showArray(arr, len);

            printf("Max Index: %d\n", findMaxIndex(arr, len));
            printf("Min Index: %d\n", findMinIndex(arr, len));
            printf("Average: %.2f\n", findAverage(arr, len));

            reverseArray(arr, len);
            printf("Reversed: ");
            showArray(arr, len);

            bubbleSort(arr, len);
            printf("Sorted: ");
            showArray(arr, len);

            int val = 4;
            printf("Searching %d... ", val);
            int pos = linearSearch(arr, len, val);
            if (pos != -1) printf("Found at index %d\n", pos);
            else printf("Not found\n");  
            
            break;
        }
            
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
