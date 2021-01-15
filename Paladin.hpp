/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include "Character.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"

class Paladin : public virtual Warrior, public virtual Priest {
    public:
        Paladin(const std::string &name, int level);
        ~Paladin();
        using Warrior::CloseAttack;
        using Priest::RangeAttack;
        using Priest::Heal;
        using Warrior::RestorePower;
        int Intercept();
};

#endif /* !PALADIN_HPP_ */
