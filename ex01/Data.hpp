/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:10:26 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/27 18:44:35 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
    int x;
    int y;
public:
    Data();
    Data(int x, int y);
    Data(const Data& data);
    Data& operator=(const Data& data);
    ~Data();
    int getX() const;
    int getY() const;
};

#endif //DATA_HPP
