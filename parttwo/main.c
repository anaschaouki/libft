#include <stdio.h>
#include <string.h>

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    i;
    size_t    len;
    size_t    slen;
    size_t    dslen;

    if (!dst && !size)
        return (slen + size);
    if (size == 0 || size < len)
        return (slen + size);
    i = 0;
    len = strlen(dst);
    slen = strlen(src);
    dslen = strlen(src) + strlen(dst);
    while (len < size -1)
    {
        dst[len] = src[i];
        len++;
        i++;
    }
    dst[len] = '\0';
    return (dslen);
}

int main()
{
    // my func
    char str[0xF] = "nyan !";
    // char buff2[] = ;
    printf("%zu\n", strlcat(((void *)0), str, 0));
    // printf(";%s;\n",buff2);
}