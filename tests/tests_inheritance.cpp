/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** tests_inheritance
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "Character.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"

void redirect_output() {
    cr_redirect_stdout();
}

Test(tests_character, basic_testing, .init=redirect_output) {
    Character Arthur("Arthur", 5);

    cr_assert_str_eq(Arthur.getName().c_str(), "Arthur");
    cr_assert_eq(Arthur.getLvl(), 5);
    cr_assert_eq(Arthur.getPower(), 100);
    cr_assert_eq(Arthur.getPv(), 100);
    for (int i = 0; i < 10; i++) {
        cr_assert_eq(Arthur.CloseAttack(), 15);
    }
    cr_assert_eq(Arthur.getPower(), 0);
    cr_assert_eq(Arthur.CloseAttack(), 0);
    Arthur.RestorePower();
    cr_assert_eq(Arthur.getPower(), 100);
    Arthur.TakeDamage(49);
    cr_assert_eq(Arthur.getPv(), 51);
    Arthur.Heal();
    cr_assert_eq(Arthur.getPv(), 100);
    Arthur.TakeDamage(51);
    cr_assert_eq(Arthur.getPv(), 49);
    Arthur.Heal();
    cr_assert_eq(Arthur.getPv(), 99);
    Arthur.TakeDamage(1000);
    Arthur.TakeDamage(1);
    Arthur.Heal();
    cr_assert_eq(Arthur.RangeAttack(), 10);
    cr_assert_stdout_eq_str("Arthur Created\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur strikes with a wooden stick\n\
Arthur out of power\n\
Arthur eats\n\
Arthur takes 49 damage\n\
Arthur takes a potion\n\
Arthur takes 51 damage\n\
Arthur takes a potion\n\
Arthur takes 1000 damage\n\
Arthur out of combat\n\
Arthur out of combat\n\
Arthur takes a potion\n\
Arthur tosses a stone\n");
}

Test(tests_warrior, basic_testing, .init=redirect_output) {
    Warrior John("John", 5);

    cr_assert_str_eq(John.getName().c_str(), "John");
    cr_assert_eq(John.getLvl(), 5);
    cr_assert_eq(John.getPower(), 100);
    cr_assert_eq(John.getPv(), 100);
    for (int i = 0; i < 3; i++) {
        cr_assert_eq(John.CloseAttack(), 32);
    }
    cr_assert_eq(John.getPower(), 10);
    cr_assert_eq(John.CloseAttack(), 0);
    John.RestorePower();
    cr_assert_eq(John.getPower(), 100);
    John.TakeDamage(49);
    cr_assert_eq(John.getPv(), 51);
    John.Heal();
    cr_assert_eq(John.getPv(), 100);
    John.TakeDamage(51);
    cr_assert_eq(John.getPv(), 49);
    John.Heal();
    cr_assert_eq(John.getPv(), 99);
    John.TakeDamage(1000);
    John.TakeDamage(1);
    John.Heal();
    John.Range = Character::RANGE;
    cr_assert_eq(John.RangeAttack(), 0);
    cr_assert_stdout_eq_str("John Created\n\
I'm John KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG\n\
John strikes with his hammer\n\
John strikes with his hammer\n\
John strikes with his hammer\n\
John out of power\n\
John eats\n\
John takes 49 damage\n\
John takes a potion\n\
John takes 51 damage\n\
John takes a potion\n\
John takes 1000 damage\n\
John out of combat\n\
John out of combat\n\
John takes a potion\n\
John intercepts\n");
}

Test(tests_mage, basic_testing, .init=redirect_output) {
    Mage Dutch("Dutch", 5);

    cr_assert_str_eq(Dutch.getName().c_str(), "Dutch");
    cr_assert_eq(Dutch.getLvl(), 5);
    cr_assert_eq(Dutch.getPower(), 100);
    cr_assert_eq(Dutch.getPv(), 100);
    for (int i = 0; i < 4; i++) {
        cr_assert_eq(Dutch.RangeAttack(), 31);
    }
    cr_assert_eq(Dutch.getPower(), 0);
    cr_assert_eq(Dutch.CloseAttack(), 0);
    Dutch.RestorePower();
    cr_assert_eq(Dutch.getPower(), 62);
    Dutch.TakeDamage(49);
    cr_assert_eq(Dutch.getPv(), 51);
    Dutch.Heal();
    cr_assert_eq(Dutch.getPv(), 100);
    Dutch.TakeDamage(51);
    cr_assert_eq(Dutch.getPv(), 49);
    Dutch.Heal();
    cr_assert_eq(Dutch.getPv(), 99);
    Dutch.TakeDamage(1000);
    Dutch.TakeDamage(1);
    Dutch.Heal();
    cr_assert_eq(Dutch.CloseAttack(), 0);
    cr_assert_eq(Dutch.Range, Character::RANGE);
    cr_assert_stdout_eq_str("Dutch Created\n\
Dutch teleported\n\
Dutch launches a fire ball\n\
Dutch launches a fire ball\n\
Dutch launches a fire ball\n\
Dutch launches a fire ball\n\
Dutch out of power\n\
Dutch takes a mana potion\n\
Dutch takes 49 damage\n\
Dutch takes a potion\n\
Dutch takes 51 damage\n\
Dutch takes a potion\n\
Dutch takes 1000 damage\n\
Dutch out of combat\n\
Dutch out of combat\n\
Dutch takes a potion\n\
Dutch blinks\n");
}

Test(tests_priest, basic_testing, .init=redirect_output) {
    Priest Charles("Charles", 5);

    cr_assert_str_eq(Charles.getName().c_str(), "Charles");
    cr_assert_eq(Charles.getLvl(), 5);
    cr_assert_eq(Charles.getPower(), 100);
    cr_assert_eq(Charles.getPv(), 100);
    for (int i = 0; i < 4; i++) {
        cr_assert_eq(Charles.RangeAttack(), 41);
    }
    cr_assert_eq(Charles.getPower(), 0);
    cr_assert_eq(Charles.RangeAttack(), 0);
    Charles.RestorePower();
    cr_assert_eq(Charles.getPower(), 92);
    Charles.TakeDamage(49);
    cr_assert_eq(Charles.getPv(), 51);
    Charles.Heal();
    cr_assert_eq(Charles.getPv(), 100);
    Charles.TakeDamage(98);
    cr_assert_eq(Charles.getPv(), 2);
    Charles.Heal();
    cr_assert_eq(Charles.getPv(), 72);
    Charles.TakeDamage(1000);
    Charles.TakeDamage(1);
    Charles.Heal();
    cr_assert_eq(Charles.CloseAttack(), 31);
    cr_assert_eq(Charles.Range, Character::RANGE);
    cr_assert_stdout_eq_str("Charles Created\n\
Charles teleported\n\
Charles enters in the order\n\
Charles launches a fire ball\n\
Charles launches a fire ball\n\
Charles launches a fire ball\n\
Charles launches a fire ball\n\
Charles out of power\n\
Charles takes a mana potion\n\
Charles takes 49 damage\n\
Charles casts a little heal spell\n\
Charles takes 98 damage\n\
Charles casts a little heal spell\n\
Charles takes 1000 damage\n\
Charles out of combat\n\
Charles out of combat\n\
Charles casts a little heal spell\n\
Charles uses a spirit explosion\n");
}

Test(tests_paladin, basic_testing, .init=redirect_output) {
    Paladin Lenny("Lenny", 5);

    cr_assert_str_eq(Lenny.getName().c_str(), "Lenny");
    cr_assert_eq(Lenny.getLvl(), 5);
    cr_assert_eq(Lenny.getPower(), 100);
    cr_assert_eq(Lenny.getPv(), 100);
    for (int i = 0; i < 3; i++) {
        cr_assert_eq(Lenny.CloseAttack(), 29);
    }
    cr_assert_eq(Lenny.getPower(), 10);
    cr_assert_eq(Lenny.CloseAttack(), 0);
    Lenny.RestorePower();
    cr_assert_eq(Lenny.getPower(), 100);
    Lenny.TakeDamage(49);
    cr_assert_eq(Lenny.getPv(), 51);
    Lenny.Heal();
    cr_assert_eq(Lenny.getPv(), 100);
    Lenny.TakeDamage(98);
    cr_assert_eq(Lenny.getPv(), 2);
    Lenny.Heal();
    cr_assert_eq(Lenny.getPv(), 72);
    Lenny.TakeDamage(1000);
    Lenny.TakeDamage(1);
    Lenny.Heal();
    cr_assert_eq(Lenny.RangeAttack(), 30);
    Lenny.Range = Character::RANGE;
    Lenny.Intercept();
    cr_assert_stdout_eq_str("Lenny Created\n\
I'm Lenny KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG\n\
Lenny teleported\n\
Lenny enters in the order\n\
the light falls on Lenny\n\
Lenny strikes with his hammer\n\
Lenny strikes with his hammer\n\
Lenny strikes with his hammer\n\
Lenny out of power\n\
Lenny eats\n\
Lenny takes 49 damage\n\
Lenny casts a little heal spell\n\
Lenny takes 98 damage\n\
Lenny casts a little heal spell\n\
Lenny takes 1000 damage\n\
Lenny out of combat\n\
Lenny out of combat\n\
Lenny casts a little heal spell\n\
Lenny launches a fire ball\n\
Lenny intercepts\n");
}