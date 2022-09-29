#include <stdio.h>

char is_palindrome(unsigned int num);
/**
 * main - entry point to find palindrome program
 *
 * Return: always 0
 */
int main(void)
{
	unsigned int num1, num2, x, max;

	max = 0;
	for (num1 = 100; num1 <= 999; num1++)
	{
		for (num2 = 100; num2 <= 999; num2++)
		{
			x = num1 * num2;
			if (is_palindrome(x))
				max = (x > max) ? x : max;
		}
	}
	printf("Largest palindrome of 3 digit numbers is: %d\n", max);
}
/**
  * is_palindrome - function checks if list is a palindrome.
  * @num: number to check.
  * Return: 1 if number is a palindrome, or 0 if not.
  */
char is_palindrome(unsigned int num)
{
	unsigned int rev = 0, remainder = 0, k = num;

	while (k != 0)
	{
		remainder = k % 10;
		rev = rev * 10 + remainder;
		k /= 10;
	}
	if (rev == num)
		return (1);
	return (0);
}
