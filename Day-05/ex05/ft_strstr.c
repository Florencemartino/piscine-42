/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 21:16:27 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/02 22:45:22 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int n;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			n = i;
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[n]);
				j++;
				i++;
			}
			i = n;
		}
		i++;
	}
	return (0);
}
