/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:11:37 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 21:11:43 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/27/22.
//

#include "Classes.hpp"
#include "Functions.hpp"

int main() {
    Base *b = generate();
    identify(b);
    identify(*b);
    delete b;
}