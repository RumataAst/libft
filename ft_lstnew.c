#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

int main(void)
{
    int c = 1;
    t_list *new = ft_lstnew(&c);
    printf("content is %i\n", *(int *)(new->content));
    free(new); // Don't forget to free the allocated memory
    return (0);
}