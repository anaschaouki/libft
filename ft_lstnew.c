#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (0);
    new->content = content;
    new->next = NULL;
    return (new);
}

// int main ()
// {
//     t_list *head;
//     int pn = 34;
//     // int *p = &pn;
//     head = ft_lstnew(&pn);
//     printf("%p", head);
// }