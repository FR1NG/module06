/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:16:17 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 18:19:14 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data *data = new Data(10, 15);

    std::cout << "=== before cast ===" << std::endl;
    std::cout << "x value: " << data->getX() << std::endl;
    std::cout << "y value: " << data->getY() << std::endl;

    uintptr_t intptr = serialize(data);
    Data *data1 = deserialize(intptr);

    std::cout << "=== after cast ===" << std::endl;
    std::cout << "x value: " << data1->getX() << std::endl;
    std::cout << "y value: " << data1->getY() << std::endl;

}