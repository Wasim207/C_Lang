//C Program to Check Prime Number Using sqrt(N)
#include <stdio.h>
#include <math.h>

int check_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    if (num == 2)
    {
        return 1;
    }

    if (num % 2 == 0)
    {
        return 0;
    }

    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (check_prime(num))
    {
        printf("%d is a Prime Number\n", num);
    }
    else
    {
        printf("%d is Not a Prime Number\n", num);
    }

    return 0;
}