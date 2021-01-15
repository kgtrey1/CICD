/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Paladin
*/

#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level) : Character(name, level), Warrior(name, level), Priest(name, level)
{
    this->_strength = 9;
    this->_stamina = 10;
    this->_intel = 10;
    this->_spirit = 10;
    this->_agility = 2;
    std::cout << "the light falls on " << this->_name << std::endl;
    return;
}

int Paladin::Intercept(void) {
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

Paladin::~Paladin(void) {}