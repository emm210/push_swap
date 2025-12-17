#include "push_swap.h"
void print_stack(t_stack *stack, char name)
{
    t_node *current;

    printf("Stack %c (size = %d): ", name, stack->size);

    current = stack->top;
    while (current)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main(void)
{
    t_stack SA;
    t_stack SB;

    init_stack(&SA);
    init_stack(&SB);

    t_node *node1 = new_node(23, 1);
    t_node *node2 = new_node(12, 2);
    t_node *node3 = new_node(33, 3);

    push(&SA, node1);
    push(&SA, node2);
    push(&SA, node3);
    print_stack(&SA, 'A');

    sa(&SA);
    pb(&SA, &SB);
    sa(&SA);
    pa(&SA, &SB);

    print_stack(&SA, 'A');
    print_stack(&SB, 'B');

    return (0);
}
