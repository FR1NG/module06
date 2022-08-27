/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:08:33 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 19:08:55 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/27/22.
//

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <random>
#include <ctime>
#include <iostream>
#include "Classes.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif //FUNCTIONS_HPP
