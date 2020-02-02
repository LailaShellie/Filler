//
// Created by Laila Shellie on 2020-02-02.
//

#include "../includes/filler.h"

void	ft_print(char const *s)
{
	write(2, "!!!", 3);
	write(2, s, ft_strlen(s));
	write(2, "!!!\n", 4);
}

void	exit_with_error()
{
	ft_print("@@@@");
	exit(0);
}

void	parse_introduce(t_filler *filler)
{
	char 	*str;
	char	**split;
	int 	num;

	str = 0;
	get_next_line(0, &str);
	split = ft_strsplit(str, ' ');
	num = ft_count_split(split);
	if (num != 5)
		exit_with_error();
	if (ft_strcmp(split[0], "$$$") != 0)
		exit_with_error();
	if (ft_strcmp(split[1], "exec") != 0)
		exit_with_error();
	if (ft_strcmp(split[2], "p1") != 0 &&
			ft_strcmp(split[2], "p2") != 0)
		exit_with_error();
	if (ft_strcmp(split[3], ":") != 0)
		exit_with_error();
	if (ft_strstr(split[4], "lshellie.filler") == 0)
		exit_with_error();
	filler->symbol = split[2][1] == '1' ? 'X' : 'O';
}

int		parse_input(t_filler *filler)
{
	return (0);
}