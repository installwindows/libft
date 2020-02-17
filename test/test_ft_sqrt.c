#include "libft.h"
#include <math.h>

int run_test_ft_sqrt(void)
{
	double n[7] = {42, 9, 15, 12, 365, 10, 9001};
	double math_r;
	double ft_r;

	// it just needs to be close enough
	for (int i = 0; i < 7; i++)
	{
		math_r = sqrt(n[i]);
		ft_r = ft_sqrt(n[i]);
		ft_printf("n: %f\n", n[i]);
		ft_printf("ft_sqrt  : %f\n", ft_r);
		ft_printf("math sqrt: %f\n", math_r);

		double diff = math_r - ft_r;
		ft_printf("%s\n", (diff > -1 && diff < 1) ? "OK": "KO");
		ft_printf("\n");
	}
	return 0;
}
