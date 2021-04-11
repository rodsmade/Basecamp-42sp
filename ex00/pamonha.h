

#include <stdlib.h> // malloc, free // oxe nao achou a bib ?????? ñ deixou compilar
#include <unistd.h>
#include <stdio.h>

int		ft_input_is_valid(int argc, char **argv);
void	ft_prints_map(char g_mapa[16]);
void	ft_checks_for_fours(char g_mapa[16], char horizontal[2][4], char vertical[4][2]);
