#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *z)
{
 size_t nu = 0;

 while (z)
 {
 printf("%d\n", z->n);
 nu++;
 z = z->next;
 }

 return (nu);
}
