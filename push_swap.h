/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahidalg <rahidalg@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:34:22 by rahidalg          #+#    #+#             */
/*   Updated: 2025/02/17 12:34:32 by rahidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_list
{
	int					value;
	int					current_position;
	int					final_index;
	int					push_price;
	int					above_median;
	int					cheapest;
	struct s_list		*target_node;
	struct s_list		*next;
	struct s_list		*prev;
}				t_list;

//*** Handle errors-free ***
void			free_matrix(char **argv);
void			error_free(t_list **a, char **argv, int flag_argc_2);
void			free_stack(t_list **stack);
int				error_repetition(t_list *a, int nbr);
int				error_syntax(char *str_nbr);

//*** Stack creation ***
void			stack_init(t_list **a, char **argv, int flag_argc_2);
void			init_nodes(t_list *a, t_list *b);
void			set_current_position(t_list *stack);
void			set_price(t_list *a, t_list *b);
void			set_cheapest(t_list *b);

//*** linked list utils ***
void			append_node(t_list **stack, int nbr);
t_list			*find_last_node(t_list *head);
t_list			*find_smallest(t_list *stack);
t_list			*return_cheapest(t_list *stack);
int				stack_sorted(t_list *stack);
int				stack_len(t_list *stack);
void			finish_rotation(t_list **s, t_list *n, char c);

//*** Algorithms ***
void			fast_sort(t_list **a);
void			handle_five(t_list **a, t_list **b);
void			long_sort(t_list **a, t_list **b);

//*** Commands ***
void			sa(t_list **a);
void			sb(t_list **b);
void			ss(t_list **a, t_list **b);
void			ra(t_list **a);
void			rb(t_list **b);
void			rr(t_list **a, t_list **b);
void			rra(t_list **a);
void			rrb(t_list **b);
void			rrr(t_list **a, t_list **b);
void			pa(t_list **a, t_list **b);
void			pb(t_list **b, t_list **a);

#endif
