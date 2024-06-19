#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <errno.h>

int main()
{
	//char s[INT_MAX];
	ssize_t ret;
	long n;
	/*for (int i = 0; i < INT_MAX; i++)
		s[i] = 'A';*/

	/*s = calloc(INT_MAX + 1, sizeof(char));
	if (!s)
	{
		puts("NULL");
		return (0);
	}
	s = memset(s, 'A', INT_MAX + 1);*/
	errno = 0;
	char c = 'A';
	size_t i = INT_MAX;
	ret = write(1, &c, i + 1);
	printf("ret: %zu\n", ret);
	printf("%s\n",strerror(errno));
	//printf("EINVAL: %s\n",strerror(22));
	n = INT_MAX;
	n++;
	//n += 1;
	if (ret == n)
		puts("Success");
	else
		puts("Failed");
	//free(s);
}
