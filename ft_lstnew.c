#include <stddef.h> 
#include <stdlib.h>
#include <stdio.h> 
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    if(!new)
        return NULL;
    new->content = content;
    new->next = NULL;
    return new;
}
void ft_lstadd_front(t_list **lst, t_list *new)
{
    int i ; 
    i = 0;
    if(lst == NULL)
    {
        *lst = new;
    }
    else{
        new->next = *lst;
        *lst= new;
    } 
}
int ft_lstsize(t_list *lst)
{
    int i; 
    i = 1;
    while(lst->next != NULL)
    {
        printf("%d",i);
    lst +i;
    i++;
    } 
    return i;
} 
int main() 
{
   static struct t_list *head = NULL; 
   t_list *t = ft_lstnew(NULL);
    t_list *head_list = NULL;
    t_list *new = malloc(sizeof(t_list));
    t_list *new2 = malloc(sizeof(t_list));
     new->content ="dadad" ;
    head_list->content = "dadad" ;
    head_list->next = new;
     new->next = new2 ;
     new2->content = "12" ;
     new2->next = NULL;
    // ft_lstadd_front(&head_list , new);
    ft_lstadd_front(&head_list,new2);
    printf("%d",ft_lstsize(head_list));
    return 0 ; 
} 