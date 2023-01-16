#include "libft.h"

unsigned int	print_pointer(unsigned long int nbr)
{
    char    *psign;
    char    *hex;
    char    *result;
    int     size;
    
    if (nbr == 0)
		return (write(1, "(nil)", 5));
    else
    {
        result = (char *)malloc(size);
        psign = (char *)malloc(2);
        size = 3 + ft_strlen(nbr);
        psign = "0x";
        hex = ft_hextoa(nbr, 'x');
        ft_strlcat(result, psign, size);
        ft_strlcat(result, hex, size);
        return(result);
    }
}