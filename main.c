/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:06:52 by jvigneau          #+#    #+#             */
/*   Updated: 2022/02/07 12:33:35 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/rush_02.h"

int	main(int argc, char **argv)
{
	char	*path_to_dict;
	int		i;

	i = 0;
	if (argc != 2 && argc != 3)
		return (-1);
	path_to_dict = malloc(sizeof(char) * 22);
	if (!path_to_dict)
		return (-1);
	path_to_dict = "./utils/english.txt";
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (!ft_isdigit(argv[1][i]))
			{
				write(1, "ERROR Wrong Input\n", 18);
				return (-1);
			}
			i++;
		}
		convert_it_eng(argv[1], path_to_dict);
	}
	// if (argc == 3)
	// {
	// 	convert_it_other(argv[2], argv[1]);
	// 	printf("yayayayay\n");
	// }

	return (TRUE);
}