#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char* str) {
    size_t i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

char **ft_split(char const *s, char c) {
    char** result = (char**)malloc(2 * sizeof(char*)); // Allocate memory for array of pointers

    if (result == NULL) {
        return NULL; // Check for allocation failure
    }

    size_t i = 0;
    while (s[i] && (s[i] != c)) {
        i++;
    }

    result[0] = (char*)malloc((i + 1) * sizeof(char)); // Allocate memory for result[0] string
    if (result[0] == NULL) {
        free(result); // Clean up memory in case of failure
        return NULL;
    }

    i = 0;
    while (s[i] && (s[i] != c)) {
        result[0][i] = s[i];
        i++;
    }
    result[0][i] = '\0'; // Null-terminate the string

    if (s[i] == c) {
        i++;
        result[1] = strdup(s + i); // Use strdup to duplicate the remaining string
        if (result[1] == NULL) {
            free(result[0]); // Clean up memory in case of failure
            free(result);
            return NULL;
        }
    } else {
        result[1] = NULL; // If delimiter not found, set second string to NULL
    }

    return result;
}

int main(void) {
    char string[] = "Hell/o";
    char c = '/';
    char **result = ft_split(string, c);

    if (result) {
        printf("first %s\nsecond %s", result[0], result[1]);

        // Clean up allocated memory
        free(result[0]);
        free(result[1]);
        free(result);
    } else {
        printf("Memory allocation failed.");
    }

    return 0;
}
