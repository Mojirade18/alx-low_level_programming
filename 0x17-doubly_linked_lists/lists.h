#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* Include this for the definition of size_t */

/* Define the structure for a doubly linked list node */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototype for dlistint_len function */
size_t dlistint_len(const dlistint_t *h);

#endif /* LISTS_H */
