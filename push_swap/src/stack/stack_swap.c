#include "push_swap.h"

void swap_a(t_stack *SA)
{
    if (SA->size < 2)
        return ;
    t_node* first = SA->top;
    t_node* second = SA->top->next;
    t_node* rest = second->next;
    SA->top = second;
    second -> prev = NULL;
    second -> next = first;
    first -> prev= second;
    first -> next = rest;
    if (rest)
        rest->prev = first;
}

void swap_b(t_stack *SB)
{
    if (SB->size < 2)
        return ;
    t_node* first = SB->top;
    t_node* second = SB->top->next;
    t_node* rest = second->next;
    SB->top = second;
    second -> prev = NULL;
    second -> next = first;
    first -> prev= second;
    first -> next = rest;
    if (rest)
        rest->prev = first;
}