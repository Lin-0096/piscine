#include <stdio.h>
int     main(int argc, char **argv)
{
        int i = 0;
        t_stock_str *sth;
        sth = ft_strs_to_tab(argc, argv);
        while (i < argc)
        {
                printf("%i\n", sth[i].size);
                printf("%s\n", sth[i].str);
                printf("%s\n", sth[i].copy);
                i++;
        }
        free (sth);

}
(without ex05)


#include <stdio.h>
int     main(int argc, char **argv)
{
        t_stock_str *str;
        str = ft_strs_to_tab(argc, argv);
        ft_show_tab(str);
}
(ex05, plus ex04 cfile and h file)
