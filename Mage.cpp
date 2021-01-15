/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Mage
*/

#include <iostream>
#include "Mage.hpp"
 
Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    this->_strength = 6;
    this->_stamina = 6;
    this->_intel = 12;
    this->_spirit = 11;
    this->_agility = 7;
    std::cout << name << " teleported" << std::endl;
}

Mage::~Mage() {}

int Mage::CloseAttack(void)
{
    if (this->Range == RANGE)
        return (0);
    else if (this->_energy < 10)
        std::cout << this->_name << " out of power" << std::endl;
    else {
        this->_energy -= 10;
        std::cout << this->_name << " blinks" << std::endl;
        this->Range = RANGE;
    }
    return (0);
}

int Mage::RangeAttack(void)
{
    if (this->_energy < 25) {
        std::cout << this->_name << " out of power" << std::endl;
        return (0);
    }
    this->_energy -= 25;
    std::cout << this->_name << " launches a fire ball" << std::endl;
    return (this->_spirit + 20);
}

void Mage::RestorePower(void)
{
    if (this->_energy + 50 + this->_intel >= 100)
        this->_energy = 100;
    else
        this->_energy += 50 + this->_intel;
    std::cout << this->_name << " takes a mana potion" << std::endl;
    return;
}