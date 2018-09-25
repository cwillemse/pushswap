#include "libft.h"

char	**ft_strnew_two(size_t x, size_t y)
{
	char	**tab;
	char	*table2;
	size_t	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * y);
	table2 = (char *)malloc(sizeof(char) * x * y);
	while (i < y)
	{
		tab[i] = &table2[i * x];
		i++;
	}
	return (tab);
}
