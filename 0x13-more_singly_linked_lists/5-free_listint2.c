#include "lists.h"
#include <stdlib.h>

void free_listint2(listint_t **head)
{
listint_t *hold;

while (head && *head)
{
hold = *head;
*head = (**head).next;
free(hold);
}
}
