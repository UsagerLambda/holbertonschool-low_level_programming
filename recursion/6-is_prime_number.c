/**
 * increment - Entry point
 * @n: number
 * @i: increment number
 * Description : check if n correspond to if
 * Return: Always 0.
 */
int increment(int n, int i)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (increment(n, i + 1));
}
/**
 * is_prime_number - Entry point
 * @n: number
 * Description : check if n < 2 if not go to function increment
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (increment(n, 2));
}
