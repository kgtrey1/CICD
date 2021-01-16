/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Mage
*/

#include <iostream>
#include "Priest.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    this->_strength = 4;
    this->_stamina = 4;
    this->_intel = 42;
    this->_spirit = 21;
    this->_agility = 2;
    std::cout << this->_name << " enters in the order" << std::endl;
}

Priest::~Priest(void)
{

}

int Priest::CloseAttack(void)
{
    if (this->Range == RANGE)
        return (0);
    if (this->_energy < 10) {
        std::cout << this->Character::_name << " out of power" << std::endl;
        return (0);
    }
    this->_energy -= 10;
    std::cout << this->Character::_name << " uses a spirit explosion" << std::endl;
    this->Range = RANGE;
    return (10 + this->_spirit);
}

void Priest::Heal(void)
{
    if (this->_energy < 10) {
        std::cout << this->_name << " out of power" << std::endl;
        return;
    }
    this->_energy -= 10;
    if (this->_hp >= 30)
        this->_hp = 100;
    else
        this->_hp += 70;
    std::cout << this->Mage::_name << " casts a little heal spell" << std::endl;
    return;
}