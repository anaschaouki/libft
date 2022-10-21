#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

// int main()
// {
//     t_list  *head;
//     head = malloc(sizeof(t_list));
//     head->content = "33";
//     head->next = NULL;
//     t_list *current;
//     current = malloc(sizeof(t_list));
//     current->content = "44";
//     current->next = NULL;
//     head->next = current;
    
//     current->content = "55";
//     head->next->next = current;

//     // new node to be added 
//     t_list *new;
//     new = malloc(sizeof(t_list));
//     new->content = "22";
//     new->next = NULL;
//     ft_lstadd_front(&head,new);
//     printf("%s",head->content);
// }