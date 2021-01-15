/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <string>

class Character {
    public:
        Character(const std::string &name, int level);
        ~Character();
        const std::string &getName() const;
        int getLvl() const;
        int getPv() const;
        int getPower() const;
        int CloseAttack(void);
        int RangeAttack(void);
        void Heal(void);
        void RestorePower(void);
        void TakeDamage(int damage);
        enum AttackRange { CLOSE, RANGE };
        AttackRange Range;
    protected:
        const std::string _name;
        int _level;
        int _hp;
        int _energy;
        int _strength;
        int _stamina;
        int _intel;
        int _spirit;
        int _agility;
};

#endif /* !CHARACTER_HPP_ */
