/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:38:58 by jvigneau          #+#    #+#             */
/*   Updated: 2022/02/07 13:50:28 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/rush_02.h"

void	convert_it_eng(char *num, char *dict)
{
	char	*output;

	output = really_searching(num, dict);
	printf("reponse %s\n", output);
}

char	*really_searching(char *num, char *dict)
{
	char	*retour;
	char	*temp_ret;
	int		fd;
	int		check;
	int		number;

	check = FALSE;
	fd = open(dict, O_RDONLY);
	if (fd <= 0)
		return (NULL);
	retour = get_next_line(fd);
	if (!retour)
		return (NULL);
	while (retour != NULL)
	{
		check = check_for_it(num, retour);
		if (check == TRUE)
		{
			retour = get_only_num(retour);
			return (retour);
		}
		else if (ft_strlen(num) == 1 || ft_strlen(num) == 2)
			retour = get_only_num(retour);
		else
		{
			check = check_for_lenght(num, retour);
			if (check == TRUE)
			{
				temp_ret = write_it_ig(retour);
				number = ft_atoi(retour);
				printf("%d is the num\n", number);
				printf("temp%s\n", temp_ret);
				// while (number % 10 > 0)
				// {
				// 	number
				// }
				
				printf("str %s\n", retour);
			}
		}
		retour = get_next_line(fd);
	}
	return (retour);
}

int	check_for_lenght(char *number, char *line_read)
{
	int		len;

	len = ft_strlen(number) - 1;
	if (ft_isdigit(line_read[len]) && line_read[len + 1] == ':')
		return (TRUE);
	return (FALSE);	
}

char	*write_it_ig(char *line_read)
{
	int		i;
	int		cnt;
	char	*ret;

	i = 0;
	cnt = 0;
	ret = malloc(1000);
	while ((line_read[cnt]))
	{
		if (ft_isalpha(line_read[cnt]))
		{
			ret[i] = line_read[cnt];
			i++;
		}
		cnt++;
	}
	return (ret);
}

int	check_for_it(char *num, char *retour)
{
	int	i;

	i = 0;
	while (retour[i] != ':' || num[i])
	{
		if (retour[i] != num[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

char	*get_only_num(char *line_read)
{
	int		i;
	int		cnt;
	char	*ret;

	i = 0;
	cnt = 0;
	ret = malloc(1000);
	while ((line_read[cnt]))
	{
		if (ft_isalpha(line_read[cnt]))
		{
			ret[i] = line_read[cnt];
			i++;
		}
		cnt++;
	}
	return (ret);
}
// {
// 	char	*retour;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	retour = malloc(1000);
// 	while (line_read[i])
// 	{
// 		if (line_read[i] == ':' || ft_isdigit(line_read[i])
// 			|| line_read[i] == ' ' || line_read[i] == '\n')
// 			i++;
// 		else
// 		{
// 			retour[j] = line_read[i];
// 			i++;
// 			j++;
// 		}
// 	}
// 	retour[i] = '\0';
// 	return (retour);
// }
