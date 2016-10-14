#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char	**square;
	char	**result;
	int		len;
	int		i;

	len = 5;
	square = (char**)malloc((len + 1) * sizeof(char*));
	i = 0;
	while (i < len)
	{
		square[i] = (char*)malloc((len + 1) * sizeof(char*));
		ft_memset(square[i], 0, len + 1);
		ft_memset(square[i], '_', len);
		i++;
	}
	square[i] = 0;
	printf("This is a\n");
	result = ft_squareplusplus(&square, '.', len, len + 1);
	printf("success.\n");
	i = 0;
	printf("%ld\n", sizeof(square));
	while (i < len + 1)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
	printf("%ld\n", sizeof(square));
}
