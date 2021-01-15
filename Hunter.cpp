/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Hunter
*/

#include <iostream>
#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level)
{
    this->_weapon = "sword";
    this->_strength = 9;
    this->_stamina = 9;
    this->_intel = 5;
    this->_spirit = 6;
    this->_agility = 25;
    std::cout << this->_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}

void Hunter::RestorePower(void) {
    std::cout << this->_name << " meditates" << std::endl;
    this->_energy = 100;
}

int Hunter::RangeAttack(void) {
    if (this->_energy < 25) {
        std::cout << this->_name << " out of power" << std::endl;
        return (0);
    }
    this->_energy -= 25;
    std::cout << this->_name << " uses his bow" << std::endl;
    return (this->_agility + 20);
}