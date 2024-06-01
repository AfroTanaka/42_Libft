#include <stdio.h>
#include <stdlib.h>

int main()
{
	char **p;
	size_t i = 0;
	size_t j = 0;

	/*outer malloc*/
	p = (char**)calloc(5, sizeof(char*));
	if (!p)
	{
		puts("Allocation Failed");
		return (1);
	}
	/*inner malloc*/
	while (i < 5)
	{
		p[i] = (char *)calloc(2, sizeof(char));
		if (!*p)
		{
			puts("Allocation Failed");
			while (j <= i)
			{
				free(p[j]);
				p[j] = NULL;
				j++;
			}
		}
		/*insert '1' in each inner area*/
		*p[i] = '1';
		i++;
	}
	/*output each inner area along with outer area*/
	i = 0;
	j = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
			printf("%c", p[i][j++]);
		puts("");
		i++;
	}
	/*free part*/
	// After free, assign NULL to each inner area.
	i = 0;
	j = 0;
	while (i < 5)
	{
		free(p[i]);
		p[i] = NULL;
		i++;
	}
	i = 0;
	// Check if each inner are assigned NULL properly.
	while (i < 5)
	{
		if (!p[i])
			puts("NULL");
		i++;
	}
	// Assign NULL pointer after free outer area.
	free(p);
	p = NULL;
	// Check if outer area's assigned NULLL properly.
	if (!p)
		puts("Success");
}
