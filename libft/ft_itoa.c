/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:02:48 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/20 19:03:00 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;
	int	mult;

	if (n == -2147483648)
		return (11);
	len = 1;
	mult = 1;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n / mult > 9)
	{
		len++;
		mult = mult * 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (str == 0)
		return (NULL);
	str[len] = 0;
	if (n >= 0)
		n = n * -1;
	else
		str[0] = '-';
	while ((len > 0 && str[0] == 0)
		|| (len > 1 && str[0] == '-'))
	{
		str[len - 1] = ((n % 10) * -1 + '0');
		n = n / 10;
		len--;
	}
	return (str);
}

/*int main(void)
{
    int numbers[] = {0, 123, -123, 2147483647, -2147483648};
    int num_tests = sizeof(numbers) / sizeof(numbers[0]);
    char *result;

    for (int i = 0; i < num_tests; i++)
    {
        result = ft_itoa(numbers[i]);
        if (result != NULL)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], result);
            free(result); // Liberar la memoria asignada
        }
        else
        {
            printf("ft_itoa(%d) = NULL\n", numbers[i]);
        }
    }

    return 0;
}*/
