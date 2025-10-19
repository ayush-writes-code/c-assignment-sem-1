#include <stdio.h>
#include <math.h>
#include "mylib.h"


int reverseDigits(int n) {
    int rev = 0;
  
    while (n>0) {
        rev = rev * 10 + (n%10);
        n /= 10;
    }
    return rev;
}


int isArmstrong(int num) {
    int temp = num,sum = 0, digits = 0;
    while (temp) {
        digits++;
      
        temp /= 10;
    }
    temp = num;
    while (temp) {
        int d = temp % 10;
          sum += pow(d, digits);
        temp /= 10;
    }
    return (sum == num);
}


int isAdams(int num) {
    int sq = num * num;
  
    int rev = reverseDigits(num);
    int revSq = rev * rev;
    return (reverseDigits(sq) == revSq);
}


int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}


int isPrimePalindrome(int num) {
    if (isPrime(num) && num ==reverseDigits(num))
        return 1;
    return 0;
}

