#include <stdio.h>
#include <math.h>
#include "mylib.h"



int reverseNum(int n)
{
    int rev = 0;
    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}


int isArmstrong(int n)
{
    int temp = n, sum = 0, count = 0;

    while(temp > 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0)
    {
        int digit = temp % 10;
        sum += (int)round(pow(digit, count));
        temp /= 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}


int isAdams(int n)
{
    int sq = n * n;
    int rev = reverseNum(n);
    int revSq = rev * rev;

    if(reverseNum(sq) == revSq)
        return 1;
    else
        return 0;
}


int isPrime(int n)
{
    if(n <= 1)
        return 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}


int isPrimePalindrome(int n)
{
    if(isPrime(n) && n == reverseNum(n))
        return 1;
    else
        return 0;
}
