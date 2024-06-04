#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_word_counter(const char *s, const char delim);

__attribute__((destructor))
static void destructor() {
    system("leaks -q exec");
}

int main()
{
	char **ret;

	//ret = ft_split("hello!", ' ');
	//ret = ft_split("\t\t\t\thello!\t\t\t\t", '\t');
	//ret = ft_split("xxxxxxxxhello!", 'x');
	//ret = ft_split("hello!zzzzzzzz", 'z');
	ret = ft_split("  tripouille  42  ", ' ');
	if (!ret)
		puts("NULL");
	size_t i = 0;
	//size_t size = ft_word_counter("  tripouille  42  ", ' ') + 1;
	size_t size = ft_word_counter("  tripouille  42  ", ' ') + 1;
	printf("size: %zu\n", size);
	while (i < size)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	/*if (ret[2] == NULL)
		puts("Success");
	else
		puts("Failed");*/
	free(ret);
	ret = NULL;
}

static size_t	ft_word_counter(const char *s, const char delim)
{
	size_t	start_indx;
	size_t	end_indx;
	size_t	word_count;

	word_count = 0;
	start_indx = 0;
	while (s[start_indx])
	{
		end_indx = start_indx;
		while (s[end_indx] != delim && s[end_indx])
			end_indx++;
		if (start_indx != end_indx)
			word_count++;
		if (!s[end_indx])
			return (word_count);
		start_indx = end_indx + 1;
	}
	return (word_count);
}
