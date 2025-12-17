#include "push_swap.h"

void reverse_rotate_a(t_stack *SA)
{
    if (SA->size < 2)
        return;
    t_node* old_top = SA->top;
    t_node* old_bottom = SA->bottom;

    SA->bottom = old_bottom -> prev;
    SA->bottom -> next = NULL;

    old_top -> prev = old_bottom;
    old_bottom -> next = old_top;
    old_bottom-> prev = NULL;
    SA->top = old_bottom;
}
 void reverse_rotate_b(t_stack *SB)
{
    if (SB->size < 2)
        return;
    t_node* old_top = SB->top;
    t_node* old_bottom = SB->bottom;

    SB->bottom = old_bottom -> prev;
    SB->bottom -> next = NULL;

    old_top -> prev = old_bottom;
    old_bottom -> next = old_top;
    old_bottom-> prev = NULL;
    SB->top = old_bottom;
}