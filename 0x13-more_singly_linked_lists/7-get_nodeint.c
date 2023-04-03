#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head; i++, head = (*head).next)
if (i == index)
return (head);
return (NULL);
}
