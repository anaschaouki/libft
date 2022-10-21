#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    while (lst->next != NULL)
        lst = lst->next;
    t_list *ptr = lst;
    return (ptr);
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
//     t_list *tt = ft_lstlast(head);
//     printf("%s\n", tt->content);
// }