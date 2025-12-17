#include "push_swap.h"

void sort_3(t_stack *A)
{
    t_node* a = A->top;
    t_node* b = a -> next;
    t_node* c = b -> next;
    if(a-> rank < b-> rank && b-> rank < c-> rank)
        return ;
    else if (a->rank < c->rank && c->rank < b->rank)
    {
        sa(A);
        ra(A);
    }
    else if (b->rank < a->rank && a->rank < c->rank)
    {
        sa(A);
    }
    else if (b->rank < c->rank && c->rank < a->rank)
    {
        rra(A);
    }
    else if (c->rank < a->rank && a->rank < b->rank)
    {
        ra(A);
    }
    else if (c->rank < b->rank && b->rank< a->rank)
    {
        sa(A);
        rra(A);
    }

}

void sort_4(t_stack *A)
{
    t_node* a = A->top;
    t_node* b = a -> next;
    t_node* c = b -> next;
    t_node* d = c -> next;
    




}