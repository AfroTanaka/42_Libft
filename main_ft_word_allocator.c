#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char     *ft_word_allocater(const char *s, const char delim)
{
      size_t  start;
      size_t  end;
      char    *p_word;
 
      start = 0;
      while (s[start])
      {
          end = start;
          while (s[end] != delim && s[end])
              end++;
          if (start != end)
          {
              p_word = ft_substr(s, start, end - start);
              if (!p_word)
                  return (NULL);
              s += end;
              return (p_word);
          }
          start = end + 1;
      }
      return (NULL);
}

int main()
{
"lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse"
}
