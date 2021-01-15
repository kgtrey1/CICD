/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include "Character.hpp"

class Warrior : public virtual Character {
    public:
        Warrior(const std::string &name, int level);
        ~Warrior();
        int CloseAttack(void);
        int RangeAttack(void);
        using Character::Heal;
        using Character::RestorePower;
    protected:
        std::string _weapon;
};

#endif /* !WARRIOR_HPP_ */
