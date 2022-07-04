/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:53:21 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/03 16:53:22 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
    int j;

	i = 1;
	if(argc > 1)
	{
		while(i < argc)
		{
			j=0;
			while(argv[i][j]!= '\0')
			{
				  std::cout << (char)toupper(argv[i][j]);
				  j++;
			}
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}