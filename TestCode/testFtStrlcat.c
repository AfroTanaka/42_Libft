#include "libft_test.h"

unsigned int TestStrlcat(void)
{
	// Case 1
	char dest[11] = "Hello";
	char dest_ft[11] = "Hello";

	printf("Before\ndest: %s\ndest_ft: %s\n", dest, dest_ft);
	puts("\x1b[31mExecute strlcat...\x1b[0m");
	size_t ret_dest = strlcat(NULL, "lol", 2);
	puts("\x1b[31mExecute ft_strlcat...\x1b[0m");
	size_t ret_dest_ft = ft_strlcat(dest, "lorem", 1);
	printf("After\ndest: %s\ndest_ft: %s\n", dest, dest_ft);
	printf("ret_dest: %lu\nret_dest_ft: %lu\n", ret_dest, ret_dest_ft);

	return 0;
}
