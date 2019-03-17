/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_list_recursive.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 15:05:48 by maparmar          #+#    #+#             */
/*   Updated: 2019/03/15 16:43:54 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*typedef struct slist 
{
	int 	data;
	struct slist 	*next;
}*/			t_list;

//t_list *head = NULL;
void ft_reverse(t_list *pre, t_list **curr)
{
	if (*curr)
	{
		ft_reverse(*curr, (*curr)->next);
		(*curr)->next = pre;
	}
	else
		*curr = pre;
}

void ft_list_reverse(t_list **begin_list)
{
	ft_reverse(NULL, *begin_list);
	//return(head);
}

/********************Below is used to check it's output*******************/

/*t_list *head; // head pointer of node

t_list *ft_create(int item)
{
	t_list *new;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return NULL;
	new->data = item;
	new->next = NULL;
	return (new);
}

void push(int item)
{
	t_list *node;
	node = ft_create(item);
	node->next = head;
	head = node;
}

void ft_print_list(t_list *p)
{
	if (p == NULL)
		return;
	else
	{
		printf("%d", p->data);
		ft_print_list(p->next);
	}
}

int main (void)
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
	push(arr[1]);
	push(arr[2]);
	push(arr[9]);
	ft_print_list(head);
	printf("\n");
	t_list *result = ft_list_reverse(&head);
	ft_print_list(result);
	return 0;
}
*/
