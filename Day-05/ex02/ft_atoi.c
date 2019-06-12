/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:59:41 by fmartino          #+#    #+#             */
/*   Updated: 2019/04/02 14:06:30 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int negativ;
	int result;

	i = 0;
	negativ = 0;
	result = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\v') ||
			(str[i] == '\r') || (str[i] == '\f') || (str[i] == '\t'))
		i++;
	if (str[i] == '-')
		negativ = 1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	if (negativ == 1)
		return (-1 * result);
	else
		return (result);
}
