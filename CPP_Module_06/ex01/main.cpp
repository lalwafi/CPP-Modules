/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:56:47 by lalwafi           #+#    #+#             */
/*   Updated: 2025/09/10 23:48:25 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	Data	data;
	data.i = 42;
	data.string = "Hello World!";
	std::cout << "Data integer : " << data.i << std::endl;
	std::cout << "Data string  : " << data.string << std::endl;
	
	uintptr_t serial_val = Serializer::serialize(&data);
	std::cout << "Serialized data : " << serial_val << std::endl;
	
	Data *deserialized = Serializer::deserialize(serial_val);
	std::cout << "Deserialized data :\n";
	std::cout << "-------------------\n";
	std::cout << "		Data integer : " << deserialized->i << std::endl;
	std::cout << "		Data string  : " << deserialized->string << std::endl;
	std::cout << "Data pointer        : " << &data << std::endl;
	std::cout << "Deserialized pointer: " << &deserialized << std::endl;
}