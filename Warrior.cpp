/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Warrior
*/

#include <iostream>
#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character(name, level)
{
    this->_weapon = "hammer";
    this->_strength = 12;
    this->_stamina = 12;
    this->_intel = 6;
    this->_spirit = 5;
    this->_agility = 7;
    std::cout << "I'm " << name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior(void) {}

int Warrior::CloseAttack(void)
{
    if (this->Range == RANGE)
        return (0);
    if (this->_energy < 30) {
        std::cout << this->_name << " out of power" << std::endl;
        return (0);
    }
    this->_energy -= 30;
    std::cout << this->_name << " strikes with his " << this->_weapon << std::endl;
    return (this->_strength + 20);
}

int Warrior::RangeAttack(void)
{
    if (this->Range == CLOSE)
        return (0);
    else if (this->_energy < 10)
        std::cout << this->_name << " out of power" << std::endl;
    else {
        this->_energy -= 10;
        std::cout << this->Character::_name << " intercepts" << std::endl;
        this->Range = CLOSE;
    }
    return (0);
}