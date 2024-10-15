#include "ft_stock_str.h" 
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
	t_stock_str *array = ft_strs_to_tab(argc, argv);
	ft_show_tab(array);
	
	int i = 0;
	while (i < argc)
	{
	        free(array[i].copy);
	        i++;
	}
	free(array);

	return 0;
}
