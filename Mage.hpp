/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Mage
*/

#ifndef MAGE_HPP_
#define MAGE_HPP_

#include "Character.hpp"

class Mage : public virtual Character {
    public:
        Mage(const std::string &name, int level);
        ~Mage();
        using Character::Heal;
        int CloseAttack(void);
        int RangeAttack(void);
        void RestorePower(void);
};

#endif /* !WARRIOR_HPP_ */
