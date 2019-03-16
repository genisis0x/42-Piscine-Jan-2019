/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NQueen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 20:55:09 by maparmar          #+#    #+#             */
/*   Updated: 2019/03/15 19:19:50 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include<stdbool.h>

#define N 8
static int k = 1;

void printsolution(int board[N][N])
{
	k++;
	int i;
	int j;

	i = 0;
	j = 0;
	//printf("The %d solution is\n", k++);
	while( i < N)
	{
		while (j < N)
		{
			
			if (board[i][j])
			{
				char c = (char)(j + 1);
				write(1, &c, 1);
			}
			else
				;
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

static bool safe_way(int board[N][N], int row, int col)
{
	int i = 0;
	int j = 0;
	while (i < col)
	{
		 if (board[row][i]) // check this row on left side
			 return false;
		 i++;
	}
	i = row;
	j = col;
	while(i >= 0 && j >= 0) // check the upper diagonal on left side
	{
		if (board[i][j])
			return false;
		i--;
		j--;
	}
	i = row;
	j = col;
	while (j >= 0 && i < N) // check the lower diagonal on left side
	{
		if (board[i][j])
			return false;
		i++;
		j--;
	}
	return true;
}
static bool ft_board_solver(int board[N][N], int col) // board solver fuction 
{
	int i;
	bool res;
	
	if (col >= N)
	{
		printsolution(board);
		return true;
	}
	res = false;
	i = 0;
	while (i < N) // integer i is used to iterate the each row 
	{
		if (safe_way(board, i, col)) // check if the position is safe or not
		{
			board[i][col] = 1;
			if (ft_board_solver(board, col + 1))
					res = true;// call recursively
			board[i][col] = 0; // backtrack
		}
		i++;
	}
	return (res);
}
void ft_eight_queeb_puzzle_2(void)
{
	int board[N][N] = {{0}};
	if(!ft_board_solver(board, 0)) // board and the coloum where we have to start
		write(1, "The Board has no solution", 25);
	return ;
}
