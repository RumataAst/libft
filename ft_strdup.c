#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t		i;
	char	*copy_str;

	i = 0;
	copy_str = (char *)malloc(sizeof (char) * ft_strlen (src) + 1);
	if (copy_str == NULL)
		return (NULL);
	while (src[i])
	{
		copy_str[i] = (char)src[i];
		i++;
	}
	copy_str[i] = '\0';
	return (copy_str);
}
/*
int	main()
{
	int nums[] = ft_range(5, 15);
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", nums[i]);
	}
	free(copy_str);
	return (0);
}*/