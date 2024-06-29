#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	t_list	*temp;
	temp = ft_lstnew("Hello");
	free(temp);
}
