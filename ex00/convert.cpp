/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:45:05 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 12:46:17 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string number) : _number(number) {
}

Convert::Convert(const Convert &c) : _number(c.getNumber()) {}

Convert &Convert::operator=(const Convert &c) {
  if (this == &c)
    return (*this);
  else {
    this->_number = c.getNumber();
    return (*this);
  }
}

Convert::~Convert() {}

std::string Convert::getNumber() const { return (this->_number);}

int Convert::isFloat() const {
    int dot = 0;

    if (this->_number == "nanf" || this->_number == "-inff" || this->_number == "+inff")
        return (1);
    for (unsigned  long i = 0; i < this->_number.length() - 1; i++)
    {
        if (i == 0 && (this->_number[i] == '+' || this->_number[i] == '-'))
            continue;
        if (!std::isdigit(this->_number[i]))
        {
            if (this->_number[i] == '.')
                dot++;
            else
                return (0);
        }
    }
    if (dot > 1)
        return (0);
    if (this->_number[this->_number.length() - 1] == 'f')
        return (1);
    return (0);
}

int Convert::isChar() const {
    if (this->_number.length() == 1 && !std::isdigit(this->_number[0]))
        return 1;
    return (0);
}

int Convert::isDouble() const {
    int dot = 0;

    if (this->_number == "nan" || this->_number == "-inf" || this->_number == "+inf")
        return (1);
    for (unsigned long i = 0; i < this->_number.length(); i++)
    {
        if (i == 0 && (this->_number[i] == '+' || this->_number[i] == '-'))
            continue;
        if (!std::isdigit(this->_number[i]))
        {
            if (this->_number[i] == '.')
                dot++;
            else
                return (0);
        }
    }
    if (dot > 1 || dot == 0)
        return (0);
    return (1);
}

int Convert::isInt() const {
    for (unsigned long i = 0; i < this->_number.length(); ++i) {
        if (i == 0 && (this->_number[i] == '+' || this->_number[i] == '-'))
            continue;
        if (!std::isdigit(this->_number[i]))
            return (0);
    }
    return (1);
}

int Convert::detectType() const {
    typedef int (Convert::*myTypes)() const;
    myTypes allTypes[4] = {&Convert::isChar, &Convert::isInt, &Convert::isFloat, &Convert::isDouble};
    for (int i = 0; i < 4; i++)
    {
        if ((this->*(allTypes[i]))())
            return (i);
    }
    return -1;
}

void Convert::printValues() {
    int type = this->detectType();
    switch (type) {
        case 0:
            this->printFromChar();
            break;
        case 1:
            this->printFromInt();
            break;
        case 2:
            this->printFromFloat();
            break;
        case 3:
            this->printFromDouble();
            break;
        default:
            std::cout << "invalid type" << std::endl;

    }
}

void    Convert::printFromChar() const {
    if (std::isprint(this->_number[0]))
        std::cout << "char: " << this->_number[0] << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(this->_number[0]) << std::endl;
    std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(this->_number[0]) << "f" << std::endl;
    std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(this->_number[0]) << std::endl;
}

void Convert::printFromInt() const {
    try {
        int i;

        i = std::stoi(this->_number);
        if (std::isprint(i))
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(i) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void Convert::printFromFloat() const {
    try {
        float f;

        f = std::stof(this->_number);
        if (std::isprint(f))
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        else
            std::cout << ((this->_number == "nanf" || this->_number == "+inff" || this->_number == "-inff") ? "char: impossible" : "char: Non displayable") << std::endl;
        (this->_number == "nanf" || this->_number == "+inff" || this->_number == "-inff") ? std::cout << "int: impossible" << std::endl : std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
        std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(f) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void  Convert::printFromDouble() const {
    try {
        float d;

        d = std::stof(this->_number);
        if (std::isprint(static_cast<int>(d)))
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        else
            std::cout << ((this->_number == "nan" || this->_number == "+inf" || this->_number == "-inf") ? "char: impossible" : "char: Non displayable") << std::endl;
        (this->_number == "nan" || this->_number == "+inf" || this->_number == "-inf") ? std::cout << "int: impossible" << std::endl : std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
