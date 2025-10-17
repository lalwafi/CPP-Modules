/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:36:42 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/17 04:02:27 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstdlib>
# include <fstream>

int	replace_it(char **av)
{
	std::string	file = av[1];
	std::string	s1 = av[2];
	std::string s2 = av[3];
	std::ifstream	original;
	std::ofstream	replaced;
	
	if (s1.empty() == true)
	{
		std::cerr << "s1 cannot be empty." << std::endl;
		return (1);
	}
	original.open(file.c_str());
	if (!original.is_open())
	{
		std::cerr << "File does not exist." << std::endl;
		return (1);
	}
	replaced.open((file + ".replace").c_str());
	if (!replaced.is_open())
	{
		std::cerr << "Couldn't create new file." << std::endl;
		return (1);
	}
	
	std::string	line;
	std::size_t	pos;
	// int	len = 0;
	while (std::getline(original, line))
	{
		int	i = 0;
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			while (i < (int)pos)
				replaced << line[i++];
			replaced << s2;
			i += s1.length();
			pos = line.find(s1, i);
		}
		replaced << line.substr(i, line.length() - i) << std::endl;
	}
	original.close();
	replaced.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		return (replace_it(av));
	else
		std::cout << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
	return (1);
}
