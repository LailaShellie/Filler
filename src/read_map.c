//
// Created by Laila Shellie on 2020-02-02.
//

#include "../includes/filler.h"

int		read_size(t_filler *filler)
{
	char	*str;
	char 	**split;
	char 	*chr;

	get_next_line(0, &str);
	split = ft_strsplit(str, ' ');

	if (ft_count_split(split) != 3)
		exit_with_error();
	if (ft_strcmp(split[0], "Plateau") != 0)
		exit_with_error();
	if ((chr = ft_strchr(split[2], ':')))
		*chr = 0;
	else
		exit_with_error();
	if (!ft_isnumber(str[1]))
		exit_with_error();
}

int		read_map(t_filler *filler)
{

}