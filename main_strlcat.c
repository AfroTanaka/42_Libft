  #include <stdio.h>
   #include "libft.h"
   #include <string.h>
   #include <stdlib.h>
  
  int main()
   {
       unsigned int size = 200000;
       char *s = (char *)malloc(sizeof(char) * size);
      for (unsigned int i = 0; i < size; i++)
          s[i] = 1;
      
      s = realloc(s, sizeof(char) * (size - 10));
 

      /*for (unsigned int i = 0; i < size; i++)
          printf("%d ", s[i]);
      puts("");*/
      //printf("original: %zu %s\n", strlcat(s, "hello", 28), s);
      //printf("mine: %zu %s\n", ft_strlcat(s, "hello", 28), s);
      printf("will: %zu %s\n", ft_strlcat(s, "hello", 28), s);
      /*for (unsigned int i = 0; i < size; i++)
          printf("%d ", s[i]);*/
      puts("");
      printf("strlen: %zu\n", strlen(s));
  }
