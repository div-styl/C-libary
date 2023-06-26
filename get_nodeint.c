#include "lib.h"
/**
 * get_nodeint_at_index -  a function that returns the nth node of a listint_t linked list.
 * @head: the head
 * @index: the index
 * Return: the nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *tmp = head;
    unsigned int count = 0;
    if (head == NULL)
        return (NULL);
    for (; tmp != NULL; tmp = tmp->next, count++)
        if (count == index)
            return (tmp->n);
    return(tmp);
}
