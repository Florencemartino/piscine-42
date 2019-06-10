/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:24:30 by fmartino          #+#    #+#             */
/*   Updated: 2019/03/28 19:25:39 by fmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

 	 a = 0;
 
	 while (a < 10)
	 {
		 b = a + 1;
		 while (b < 10)
		 {
			 c = b + 1;
			 while(c < 10)
			 {
				 ft_putchar(48 + a);
				 ft_putchar(48 + b);
				 ft_putchar(48 + c);
				 if (!(a == 7 && b == 8 && c == 9))
				 {
               		ft_putchar(',');
					ft_putchar(' ');
				 }
                c++;
            }
			b++;
		 }
		 a++;
    }
}

int		main(void)
{
	ft_print_comb();
}
