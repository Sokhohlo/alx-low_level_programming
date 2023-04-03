#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
listint_t *hold;
int n;

if (head && *head)
{
hold = *head;
n = (**head).n;
*head = (**head).next;
free(hold);
return (n);
}
return (0);
}
