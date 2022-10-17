#include "libft.h"

// void    func(unsigned int i, char *ps)
// {
//     (void)i;
//     *ps = ps[i] +1 ;
// }
void    ft_striteri(char *s, void (*f)(unsigned int ,char*))
{
    unsigned int    i;
    char    *pS;
    
    i = 0;
    pS = s;
    if(!s)
        return;
        while (s[i] != '\0')
        {
            f(i,&s[i]);
            i++;
        }
}
// int main()
// {
//     char str[] = "hello";
//     ft_striteri(str,func);
//     printf("%s",str);
// }