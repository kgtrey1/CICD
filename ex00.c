/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** ex00
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ex00.h"


static void cthulhu_initializer(cthulhu_t *this)
{
    this->m_power = 42;
    this->m_name = strdup("Cthulhu");
    printf("----\nBuilding Cthulhu\n");
}

cthulhu_t *new_cthulhu()
{
    cthulhu_t *element = malloc(sizeof(cthulhu_t));

    if (element == NULL)
        return (NULL);
    cthulhu_initializer(element);
    return (element);
}

static  void  koala_initializer(koala_t *this, char *_name, char  _is_A_Legend)
{
    this->m_parent = *new_cthulhu();
    free(this->m_parent.m_name);
    this->m_parent.m_name = strdup(_name);
    this->m_parent.m_power = (_is_A_Legend == 1) ? 42 : 0; 
    this->m_is_a_legend = _is_A_Legend;
    printf("Building %s\n", _name);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
    return;
}

void attack(cthulhu_t *this)
{
    if (this->m_power >= 42) {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    }
    else
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
    return;
}

void sleeping(cthulhu_t *this)
{
    printf("%s sleeps\n", this->m_name);
    this->m_power += 42000;
    return;
}

void eat(koala_t *this)
{
    printf("%s eats\n", this->m_parent.m_name);
    this->m_parent.m_power += 42;
    return;
}

koala_t *new_koala(char *name , char is_a_legend)
{
    koala_t *element = malloc(sizeof(koala_t));

    if (element == NULL)
        return (NULL);
    koala_initializer(element, name, is_a_legend);
    return (element);
}