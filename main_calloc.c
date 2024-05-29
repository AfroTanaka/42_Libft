#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"

int    main(void)
{
    char    *p;

    printf("getting memory and zero start!\n");
    //p = ft_calloc((size_t)ULONG_MAX / 10 + (size_t)50, 10);
	//printf("%ld\n", (size_t)ULONG_MAX / 10 + (size_t)50 * 10);
    //p = calloc((size_t)ULONG_MAX / 10 + (size_t)50, 10);

    //p = ft_calloc(0, 0);
    p = (char *)calloc(0, 0);
    if (p == NULL)
        printf("mistake...\n");
    else
        printf("sucsess!!!\n");
    free(p);
    return (0);
}
