/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:45:15 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 12:46:27 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <exception>

class Convert {
private:
  std::string _number;
  int isFloat() const;
  int isDouble() const;
  int isInt() const;
  int isChar() const;

public:
  Convert();
  Convert(std::string number);
  ~Convert();
  Convert(const Convert &c);
  Convert &operator=(const Convert &c);
  std::string getNumber() const;
  int detectType() const;
  void  printValues();
  void printFromChar() const;
  void printFromInt() const;
  void printFromFloat() const;
  void printFromDouble() const;
};

#endif // !CONVERT_HPP
