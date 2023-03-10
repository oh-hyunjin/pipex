/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoh <hyoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:47:25 by hyoh              #+#    #+#             */
/*   Updated: 2022/12/28 14:07:58 by hyoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	run(int arr[2][2])
{
	arr[1][0] = 0;
	arr[1][1] = 0;
}

int main()
{
	int arr[2][2];
	arr[0][0] = -1;
	arr[0][1] = -1;
	arr[1][0] = -1;
	arr[1][1] = -1;

	run(arr);
	printf("%d, %d\n", arr[0][0], arr[0][1]);
	printf("%d, %d\n", arr[1][0], arr[1][1]);
}