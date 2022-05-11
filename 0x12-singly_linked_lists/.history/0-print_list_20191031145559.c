#include "lists.h"
/**
 * print_list - print elements of list.
 * @h: input.
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
	if (h -> str == NULL)
	{
	printf("[0] (nil)");
	h = h -> next;
	}else
	{
	printf("[%d] %s\n", h -> len, h -> str);
	h = h -> next;
	}i++;
}
return (0);
}
