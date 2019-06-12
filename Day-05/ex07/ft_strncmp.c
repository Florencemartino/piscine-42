/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 10:46:57 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/02 22:59:31 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i < n - 1))
	{
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (result = 1);
	}
	else if (s1[i] < s2[i])
	{
		return (result = -1);
	}
	else
		return (result = 0);
}
