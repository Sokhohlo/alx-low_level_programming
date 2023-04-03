#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
listint_t *hold;

while (head)
{
hold = head;
head = (*head).next;
free(hold);
}
}
