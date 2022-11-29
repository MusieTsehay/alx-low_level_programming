#include "lists.h"

/**

 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
<<<<<<< HEAD
 printf("%d\n", cursor->n);
 count += 1;
 cursor = cursor->next;
}

=======
printf("%d\n", cursor->n);
count += 1;
cursor = cursor->next;
}
>>>>>>> bb3c6fdc1692e7a2999c3e7e4d0caa3c5b4fba8b
return (count);
}
