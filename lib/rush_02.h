/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:19:02 by jvigneau          #+#    #+#             */
/*   Updated: 2022/02/07 12:47:04 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include "./libft/libft.h"
# include "./libft/get_next_line.h"

enum e_bool
{
	TRUE = 0,
	FALSE = 1,
};

char	*search_it(char *num, char *dict);
void	convert_it_eng(char *num, char *dict);
char	*really_searching(char *num, char *dict);
int		check_for_it(char *num, char *retour);
char	*get_only_num(char *line_read);
int		check_for_lenght(char *number, char *line_read);
char	*write_it_ig(char *line_read);



#endif