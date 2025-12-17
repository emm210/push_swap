#include "push_swap.h"

void rotate_a(t_stack *SA)
{
    if (SA->size < 2)
        return;
    t_node* old_top = SA->top;
    t_node* old_bottom = SA->bottom;
    SA->top= SA->top->next;
    SA->top->prev =NULL;
    old_bottom ->next = old_top;
    old_top -> prev = old_bottom;
    old_top -> next = NULL;
    SA->bottom = old_top;
}

void rotate_b(t_stack *SB)
{
    if (SB->size < 2)
        return;
    t_node* old_top = SB->top;
    t_node* old_bottom = SB->bottom;
    SB->top= old_top->next;
    SB->top->prev =NULL;
    old_bottom ->next = old_top;
    old_top -> prev = old_bottom;
    old_top -> next = NULL;
    SB->bottom = old_top;
}
