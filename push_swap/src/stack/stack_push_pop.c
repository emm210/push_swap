#include "push_swap.h"

int is_empty(t_stack *stack )
{
     if (stack->top == NULL )
        return(1);
     return(0);
}

void push(t_stack *stack, t_node* node)
{
    if (is_empty(stack))
    {
        stack->top = node;
        stack->bottom = node;
        node -> prev = NULL;
        node -> next = NULL;
    }
    else
    {
        node->next = stack->top;
        stack->top->prev = node;
        node -> prev = NULL;
        stack->top = node;
    }
     stack->size++;
}
t_node* pop(t_stack *stack)
{
    if (is_empty(stack))
        return (NULL);
    t_node* node = stack->top;
    if(stack->size == 1)
    {
        stack->top = NULL;
        stack->bottom = NULL;
    }
    else
    {
    stack->top = stack->top->next;
    stack->top->prev = NULL;
    }
    stack->size--;
    node->next = NULL;
    node->prev = NULL;
    return (node);
}