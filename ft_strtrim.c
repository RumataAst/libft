#include "libft.h"

int ft_contains(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end = ft_strlen(s1) - 1;
	size_t i = 0;

    // Find the start index of trimmed string
    while (s1[start] && ft_contains(s1[start], set))
        start++;

    // If s1 is entirely trimmed, return an empty string
    if (s1[start] == '\0')
    {
        char *result = (char *)malloc(1);
        if (result)
            result[0] = '\0';
        return result;
    }

    // Find the end index of trimmed string
    while (end > start && ft_contains(s1[end], set))
        end--;

    // Allocate memory for the trimmed string
    size_t trimmed_length = end - start + 1;
    char *result = (char *)malloc(trimmed_length + 1);

    // Copy the trimmed string to the result
    if (result != NULL)
    {
        while (i < trimmed_length)
		{
			result[i] = s1[start + i];
			i++;

		}
        result[trimmed_length] = '\0'; // Null-terminate the result string
    }

    return result;
}

int main(void)
{
    char string_1[] = ".,/";
    char string_2[] = "..,/.,..Hell./o ,/.";
    char *trimmed_string = ft_strtrim(string_2, string_1);

    printf("%s", trimmed_string);

    // Don't forget to free the allocated memory
    free(trimmed_string);
    return (0);
}
