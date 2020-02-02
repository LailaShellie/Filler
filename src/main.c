//
// Created by Laila Shellie on 2020-02-02.
//

#include "../includes/filler.h"

void	init_filler(t_filler *filler)
{
	filler->height = 0;
	filler->width = 0;
	filler->symbol = 0;
}

int		main()
{
	t_filler	filler;

	parse_introduce(&filler);
	if (!(read_input(&filler)))
		return (0);
	return (0);
}
