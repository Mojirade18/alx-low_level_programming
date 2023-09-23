#include "lists.h"
void ComeFirstbyCTC(void)__attribute__ ((constructor));

/**
 * ComeFirst - function that runs before the main function
 */
void ComeFirstbyCTC(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
