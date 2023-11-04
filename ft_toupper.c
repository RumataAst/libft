int ft_toupper(int c)
{
	if (c >= 97 & c <= 122)
		c = c - 32;
	return (c);
}

int	main(void)
{
	char c = '1';
	printf("Original function: %c\n", toupper(c));
	printf("My function: %c", ft_toupper(c));
	return (1);
}