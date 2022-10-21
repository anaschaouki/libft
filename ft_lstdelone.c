#include "libft.h"

void freeme(void *node)
{
    free(node);
}
void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list *ptr = lst;
    ptr->next = lst;
    lst = NULL;
    del(ptr->content);
    free(ptr);
}

int main()
{
    t_list *node;
    node = malloc(sizeof(t_list));
    node->content = "44";
    node->next = NULL;

    t_list *current = malloc(sizeof(t_list));
    current->content = "55";
    current->next = NULL;
    node->next = current ;
    ft_lstdelone(node,freeme);
    printf("%s",node->content);
}