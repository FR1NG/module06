/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:08:37 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 21:10:54 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/27/22.
//

#include "Functions.hpp"

Base *generate(void) {
    srand(std::time(0));
    int x = std::rand() % 3;

    switch (x) {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
        default:
            return (nullptr);
    }
}

void identify(Base* p) {
    std::cout << "the type identified by pointer: " << std::endl;
    if (dynamic_cast<A *>(p) != nullptr)
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(p) != nullptr)
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(p) != nullptr)
        std::cout << "C" << std::endl;
};

void identify(Base& p){
    std::cout << "the type identified by reference: " << std::endl;
    try {
        A &a = dynamic_cast<A&>(p);
        static_cast<void>(a);
        std::cout << "A" << std::endl;
    }catch (...) {}

    try
    {
        B &b = dynamic_cast<B&>(p);
        static_cast<void>(b);
        std::cout << "B" << std::endl;
    }
    catch(...){}
    
    try
    {
        C &c = dynamic_cast<C&>(p);
        static_cast<void>(c);
        std::cout << "C" << std::endl;
    }
    catch(...){}
};
