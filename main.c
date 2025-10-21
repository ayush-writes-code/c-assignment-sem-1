#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

// #Cp

int main()
{
    int choice, num;

    
    while(1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Test Array Functions\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

       if(choice == 5)
        {
            printf("Exiting Program.\n");
               break;
        }     if(choice >= 1 && choice <= 3)
        {
            printf("Enter a number: ");
            scanf("%d", &num);
        }

        switch(choice)
        {
            case 1:
                if(isArmstrong(num))
                    printf("Yes, it is an Armstrong number.\n");
                else
                    printf("No, not an Armstrong number.\n");
                break;

      case 2:
                if(isAdams(num))
                    printf("Yes, it is an Adams number.\n");
                else
                    printf("No, not an Adams number.\n");
                break;

            case 3:
                if(isPrimePalindrome(num))
                    printf("Prime and Palindrome both.\n");
                else
                    printf("Not a prime palindrome.\n");
                break;

            case 4:
            {
                int arr[] = {3, 1, 4, 1, 5};
                int n = 5;

                printf("\nOriginal Array: ");
                showArray(arr, n);

                printf("Max Index: %d\n", findMaxIndex(arr, n));
                printf("Min Index: %d\n", findMinIndex(arr, n));
                printf("Average: %.2f\n", findAverage(arr, n));

                reverseArray(arr, n);
                printf("Reversed: ");
                showArray(arr, n);

                sortArray(arr, n);
                printf("Sorted: ");
                showArray(arr, n);

                int val;
                printf("Enter value to search: ");
                scanf("%d", &val);
                int pos = linearSearch(arr, n, val);

                if(pos != -1)
                    printf("Value found at index %d\n", pos);
                else
                    printf("Value not found.\n");

                break;
            }
            default:
                printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}
