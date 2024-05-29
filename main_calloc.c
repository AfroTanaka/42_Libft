#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"
#include <errno.h>
#include <string.h>

int    main(void)
{
    char    *p;

    printf("Getting memory...\n");
    //p = ft_calloc((size_t)ULONG_MAX / 10 + (size_t)50, 10);
	//printf("%ld\n", (size_t)ULONG_MAX / 10 + (size_t)50 * 10);
    p = calloc((size_t)ULONG_MAX / 10 + (size_t)50, 10);

    //p = ft_calloc(0, 0);
    //p = (char *)calloc(0, 0);
	printf("%s\n",strerror(errno));
    if (p == NULL)
        printf("mistake...\n");
    else
        printf("sucsess!!!\n");
    free(p);
    return (0);
}
