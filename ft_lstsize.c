#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count = 0;
    if (lst == NULL)
        return (0);
    t_list *ptr;
    ptr = lst;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return (count);
}

// int main()
// {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = "44";
//     head->next = NULL;

//     t_list *current = malloc(sizeof(t_list));
//     current->content = "33";
//     current->next = NULL;
//     head->next = current;

//     current = malloc(sizeof(t_list));
//     current->content = "22";
//     current->next = NULL;
//     head->next->next = current;
//     printf("%d", ft_lstsize(head));
// }