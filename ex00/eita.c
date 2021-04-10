int ft_input_is_valid(int argc, char *argv[])
{
	/* Mais validações de entrada
	os parzinhos podem ser: 1-4		2-3		4-1
							1-3		2-2		3-2
							1-2		2-1		3-1

	ñ podem ser:			1-1		2-4		3-3,	4-4
											3-4		4-3
													4-2

		cima_p_baixo[0] < = > baixo_p_cima[0]
  esquerda_p_direita[0]	< = > direita_p_esquerda[0]
		cima_p_baixo[1] < = > baixo_p_cima[1]
  esquerda_p_direita[1]	< = > direita_p_esquerda[1]
		cima_p_baixo[2] < = > baixo_p_cima[2]
  esquerda_p_direita[2]	< = > direita_p_esquerda[2]
		cima_p_baixo[3] < = > baixo_p_cima[3]
  esquerda_p_direita[3]	< = > direita_p_esquerda[3]
	
	*/
	if (argc != 1 + 16)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	while (--argc > 0)
	{
		if (argv[argc] < '1' || argv[argc] > '4')	// ñ sei se vai funcionar pq cada argumento é um "string"
		{
			write (1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}


int	main(int argc, char *argv[])
{
	char cima_p_baixo[4];
	char baixo_p_cima[4];
	char esquerda_p_direita[4];
	char direita_p_esquerda[4];
	int mapa[4][4];

	if(ft_input_is_valid)
	{
		cima_p_baixo[0] = argv[1];
		cima_p_baixo[1] = argv[2];
		cima_p_baixo[2] = argv[3];
		cima_p_baixo[3] = argv[4];
		baixo_p_cima[0] = argv[5];
		baixo_p_cima[1] = argv[6];
		baixo_p_cima[2] = argv[7];
		baixo_p_cima[3] = argv[8];
		esquerda_p_direita[0] = argv[9];
		esquerda_p_direita[1] = argv[10];
		esquerda_p_direita[2] = argv[11];
		esquerda_p_direita[3] = argv[12];
		direita_p_esquerda[0] = argv[13];
		direita_p_esquerda[1] = argv[14];
		direita_p_esquerda[2] = argv[15];
		direita_p_esquerda[3] = argv[16];

/*
LINHAS:
		esquerda_p_direita[0]	|	mapa[1][1] + mapa[1][2] + mapa[1][3] + mapa[1][4]	|	direita_p_esquerda[0]
		esquerda_p_direita[1]	|	mapa[2][1] + mapa[2][2] + mapa[2][3] + mapa[2][4]	|	direita_p_esquerda[1]
		esquerda_p_direita[2]	|	mapa[3][1] + mapa[3][2] + mapa[3][3] + mapa[3][4]	|	direita_p_esquerda[2]
		esquerda_p_direita[3]	|	mapa[4][1] + mapa[4][2] + mapa[4][3] + mapa[4][4]	|	direita_p_esquerda[3]
COLUNAS:	
		cima_p_baixo[0]			|	mapa[1][1] + mapa[2][1] + mapa[3][1] + mapa[4][1]	| baixo_p_cima[0]
		cima_p_baixo[1]			|	mapa[1][2] + mapa[2][2] + mapa[3][2] + mapa[4][2]	| baixo_p_cima[1]
		cima_p_baixo[2]			|	mapa[1][3] + mapa[2][3] + mapa[3][3] + mapa[4][3]	| baixo_p_cima[2]
		cima_p_baixo[3]			|	mapa[1][4] + mapa[2][4] + mapa[3][4] + mapa[4][4]	| baixo_p_cima[3]
*/
		return (0);
	}
	else
		return;

}