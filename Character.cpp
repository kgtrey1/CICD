/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Character
*/

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &name, int level) : _name(name)
{
    this->_level = level;
    this->_hp = 100;
    this->_energy = 100;
    this->_strength = 5;
    this->_stamina = 5;
    this->_intel = 5;
    this->_spirit = 5;
    this->_agility = 5;
    this->Range = CLOSE;
    std::cout << name << " Created" << std::endl;
}

Character::~Character(void) { }

const std::string &Character::getName(void) const { return (this->_name); }

int Character::getLvl(void) const { return (this->_level); }

int Character::getPv() const { return (this->_hp); }

int Character::getPower() const { return (this->_energy); }

int Character::CloseAttack(void)
{
    if (this->Range == RANGE)
        return (0);
    if (this->_energy < 10) {
        std::cout << this->_name << " out of power" << std::endl;
        return (0);
    }
    this->_energy -= 10;
    std::cout << this->_name << " strikes with a wooden stick" << std::endl;
    return (this->_strength + 10);
}

int Character::RangeAttack(void)
{
    if (this->_energy < 10) {
        std::cout << this->_name << " out of power" << std::endl;
        return (0);
    }
    this->_energy -= 10;
    std::cout << this->_name << " tosses a stone" << std::endl;
    return (this->_strength + 5);
}

void Character::Heal(void)
{
    if (this->_hp >= 50)
        this->_hp = 100;
    else
        this->_hp += 50;
    std::cout << this->_name << " takes a potion" << std::endl;
    return;
}

void Character::RestorePower(void)
{
    this->_energy = 100;
    std::cout << this->_name << " eats" << std::endl;
    return;
}

void Character::TakeDamage(int damage) {
    if (damage <= 0)
        return;
    if (this->_hp == 0)
        std::cout << this->_name << " out of combat" << std::endl;
    else if (this->_hp - damage <= 0) {
        this->_hp = 0;
        std::cout << this->_name << " takes " << damage << " damage" << std::endl;
        std::cout << this->_name << " out of combat" << std::endl;
    }
    else {
        this->_hp -= damage;
        std::cout << this->_name << " takes " << damage << " damage" << std::endl;
    }
    return;

}