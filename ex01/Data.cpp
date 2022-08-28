/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:10:23 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 18:44:29 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

Data::Data(): x(10), y(20) {}

Data::Data(int x, int y):x(x), y(y) {}

Data::Data(const Data& data):x(data.getX()), y(data.getY()) {}

Data& Data::operator=(const Data& data) {
    if (this == &data)
        return (*this);
    x = data.getX();
    y = data.getY();
    return (*this);
}

Data::~Data() {}

int Data::getX() const {
    return (this->x);
}

int Data::getY() const { 
    return (this->y);
}
