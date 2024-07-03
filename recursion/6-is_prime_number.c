/**
 * _puts_recursion - Entry point
 * @s: string
 * Description : print a string using recursion
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
if (n % 2 == 0)
return (0);
return (is_prime_number(n + 1));
}
