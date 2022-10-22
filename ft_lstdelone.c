#include "libft.h"

// void freeme(void *node)
// {
//     free(node);
// }
void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

// int main()
// {
//     t_list *node;
//     node = malloc(sizeof(t_list));
//     node->content = ft_strdup("44");
//     node->next = NULL;

//     t_list *current = malloc(sizeof(t_list));
//     current->content = ft_strdup("55");
//     current->next = NULL;
//     node->next = current ;

//     current = malloc(sizeof(t_list));
//     current->content = ft_strdup("66");
//     current->next = NULL;
//     node->next->next = current;
//     ft_lstdelone(node->next,freeme);
//     t_list *ptr = node;
//     while(ptr)
//     {
//         printf("|%s|",ptr->content);
//         ptr = ptr->next;
//     }
// }