/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:00:51 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 19:01:01 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/27/22.
//

#ifndef CLASSES_HPP
#define CLASSES_HPP


class Base {
public:
    virtual ~Base();
};

class A: public Base{};
class B: public Base{};
class C: public Base{};




#endif //CLASSES_HPP
