#include "test.h"

int run_test(char *name)
{
	int result;

	result = 0;
	if (!ft_strcmp("ft_sqrt", name))
		result = run_test_ft_sqrt();
	else
		result = ft_printf("No test for `%s`.\n", name);
	return result;
}

int main(int argc, char **argv)
{
	int result;

	result = 0;
	if (argc > 1)
	{
		result = run_test(argv[1]);
	}
	return result;
}
