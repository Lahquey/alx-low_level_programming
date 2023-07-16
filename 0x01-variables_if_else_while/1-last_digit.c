/**
 * This program generates a random number and prints its last digit.
 * It also determines whether the last digit is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is %d and is ", n, n % 10);

    if (n % 10 > 5)
    {
        printf("greater than 5\n");
    }
    else if (n % 10 == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("less than 6 and not 0\n");
    }

    return (0);
}

