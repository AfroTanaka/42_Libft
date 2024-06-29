#include "libft.h"
#include <stdio.h>

int main()
{
	t_list	temp;
	printf("%zu\n", sizeof(temp));
	printf("%zu\n", sizeof(temp.content));
	printf("%zu\n", sizeof(temp.next));
}
