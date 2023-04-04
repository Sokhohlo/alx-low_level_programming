#include "lists.h"

/**
* print_listint -it print the elements of linked list and return # of elements
* @ih: pointer to the first element
* Return:The number of elements
*/

size_t print_listint(const listint_t *h)
{
int i;

for (i = 0; h; h = (*h).next, i++)
printf("%d\n", (*h).n);

return (i);
}
