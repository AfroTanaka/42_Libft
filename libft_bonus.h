#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// ft_lstnew
t_list	*ft_lstnew(void *content);

#endif
