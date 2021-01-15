/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Mage
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include "Mage.hpp"

class Priest : public Mage {
    public:
        Priest(const std::string &name, int level);
        ~Priest(void);
        int CloseAttack(void);
        void Heal();
        using Mage::RangeAttack;
        using Mage::RestorePower;
};

#endif /* !WARRIOR_HPP_ */