#include "libft.h"

char	*func(unsigned int i, char c)
{
	(void)i;
	c = 'e';
	return (&c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i = 0;
	char *str = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (i < ft_strlen(s))
	{
		str[i] = f(i,s[0]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char *str = "hallo world";
// 	printf("%s", ft_strmapi(str, func));
// 	return (0);
// }