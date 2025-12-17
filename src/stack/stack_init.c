#include "push_swap.h"

t_node *new_node(int value, int rank )
{
    t_node *node = malloc(sizeof(t_node));

    if(!node)
        return (NULL);

    node->value = value;
    node->rank = rank;
    node->next = NULL;
    node->prev = NULL;
    return (node);
}

void init_stack(t_stack *stack)
{
    stack->size = 0;
    stack->top = NULL;
    stack->bottom = NULL;
}