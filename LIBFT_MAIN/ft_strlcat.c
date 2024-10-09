#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t	i;
    size_t	srcsize;

    srcsize = 0;
    while (src[srcsize] != '\0')
      	srcsize++;
    i = 0;
    if (dstsize == 0)
   		return (srcsize);
    while (dstsize - 1 > i && src[i] != '\0')
    {
    	dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srcsize);
}
