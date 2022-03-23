/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:21:07 by vnazioze          #+#    #+#             */
/*   Updated: 2022/03/22 21:42:01 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack_src, t_stack *stack_dest)
{
	stack_dest->top++;
	stack_dest->stack[stack_dest->top] = stack_src->stack[stack_src->top];
	stack_src->top--;
}

void	swap(t_stack *stack)
{
	int	aux;
	int	height;

	height = stack->top;
	aux = stack->stack[height];
	stack->stack[height] = stack->stack[height - 1];
	stack->stack[height - 1] = aux;
}

void	rotate(t_stack *stack)
{
	int	aux;
	int	height;

	height = stack->top;
	if (height < 1)
		return ;
	aux = stack->stack[height];
	while (height > 0)
	{
		stack->stack[height] = stack->stack[height - 1];
		height--;
	}
	stack->stack[height] = aux;
}

void	rrotate(t_stack *stack)
{
	int	aux;
	int	height;
	int	i;

	i = 0;
	height = stack->top;
	if (height < 1)
		return ;
	aux = stack->stack[0];
	while (i < height)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->stack[height] = aux;
}