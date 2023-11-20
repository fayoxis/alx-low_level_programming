#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - ... summing the list
* @head: ... beginning of list
*
* Return: ... the answer
*/
int sum_listint(listint_t *head)
{
int sum = 0;
if (head)
{
while (head)
{
sum += head->n;
head = head->next;

}
}
return (sum);
}
