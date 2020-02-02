//
// Created by Laila Shellie on 2020-02-02.
//

#ifndef FILLER_FILLER_H
#define FILLER_FILLER_H

#include "../libft/libft.h"
#include <stdio.h>
#include <unistd.h>

//typedef struct	s_map
//{
//	int			width;
//}				t_map;

typedef struct	s_filler
{
	int			height;
	int			width;

	char 		symbol;

}				t_filler;

int		read_input(t_filler *filler);
void	parse_introduce(t_filler *filler);
void	exit_with_error();

#endif
