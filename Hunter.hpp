/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Hunter
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_

#include "Character.hpp"
#include "Warrior.hpp"

class Hunter : public Warrior {
    public:
        Hunter(const std::string &name, int level);
        ~Hunter();
        using Warrior::CloseAttack;
        using Character::Heal;
        void RestorePower(void);
        int RangeAttack(void);
};

#endif /* !HUNTER_HPP_ */
