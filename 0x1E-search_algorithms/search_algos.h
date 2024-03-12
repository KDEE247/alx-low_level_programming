#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s -Struct is a Singly Linked List Node Structure.
 * @n: Integer
 * @index: Index of Nodes in the List.
 * @next: Ptr to the Next Node.
 */
typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly Linked List With An Express Lane.
 * @n: Integer.
 * @index: Index of the Node in the List.
 * @next: Ptr to the Next Node.
 * @express: Ptr to the Next Node in the Express Lane.
 * Description: Singly Linked List Node Structure With an Express Lane.
 */
typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);


#endif /* SEARCH_ALGO_H */
