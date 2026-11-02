/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 15:20:55 by username         #+#    #+#              */
/*   Updated: 2026/11/02 15:20:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	size_t	size;
}	t_stack;

typedef enum e_strategy
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}	t_strategy;

typedef enum e_op
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
	OP_COUNT
}	t_op;

typedef struct s_context
{
	t_stack		a;
	t_stack		b;
	t_strategy	strategy;
	double		disorder;
	size_t		counts[OP_COUNT];
	int			bench;
}	t_context;

//parserの関数

//sortの関数

//stackの関数
void	push_stack(t_stack *dst, t_stack *src);
void	rotate_stack(t_stack *stack);
void	execute_op(t_context *ctx, t_op op);

//benchの関数

#endif
