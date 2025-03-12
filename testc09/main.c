#include <stdio.h>
int     main(void)
{
        char str[] = "Hello";
        char charset[] = "l";
        char **split_str = ft_split(str, charset);
        for (int i = 0; split_str[i] != NULL; i++)
        {
                printf("%s\n", split_str[i]);
                free(split_str[i]);
        }
        free(split_str);
}
