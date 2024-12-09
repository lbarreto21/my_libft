/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:14:32 by lbarreto          #+#    #+#             */
/*   Updated: 2024/11/06 12:00:25 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>

char	*ft_strdup(char *str);
int		ft_strlen(char *str);
int		linelen(char *line);
char	*line_cut(char *line);
char	*next_line(char	*line);
char	*get_next_line(int fd);

#endif
