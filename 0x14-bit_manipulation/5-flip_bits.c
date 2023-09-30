#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @first_number: first number
 * @second_number: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int first_number, unsigned long int second_number)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = first_number ^ second_number;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
