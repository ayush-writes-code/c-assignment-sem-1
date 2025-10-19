#include <stdio.h>
#include <math.h>
#include "mylib.h"

// #Cp
// reverse number digits
int reverseNum(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// check armstrong number
int isArmstrong(int n) {
    int temp = n, sum = 0, cntDigits = 0;
    while (temp) {
        cntDigits++;
        temp /= 10;
    }

    temp = n;
    while (temp) {
        int rem = temp % 10;
        sum += pow(rem, cntDigits);
        temp /= 10;
    }

    return (sum == n);
}

// check adams number
int isAdams(int n) {
    int sq = n * n;
    int rev = reverseNum(n);
    int revSq = rev * rev;
    // if reverse of square == square of reverse
    return (reverseNum(sq) == revSq);
}

// check prime number
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// check number is both prime and palindrome
int isPrimePalindrome(int n) {
    if (isPrime(n) && n == reverseNum(n))
        return 1;
    else
        return 0;
}
