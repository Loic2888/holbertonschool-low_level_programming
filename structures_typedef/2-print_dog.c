#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the details of a dog structure
 * @d: Pointer to the dog structure
 *
 * Description: This function prints the name, age, and owner of the dog.
 * If any of the fields are NULL, it prints "(nil)" instead.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Dog structure is NULL\n");
		return;
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
