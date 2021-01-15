/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** ex00
*/

#ifndef EX00_H_
#define EX00_H_

typedef struct cthulhu_s {
    int m_power;
    char *m_name;
} cthulhu_t;

typedef struct koala_s {
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);
void print_power(cthulhu_t *this);
void eat(koala_t *this);
cthulhu_t *new_cthulhu();
koala_t *new_koala(char *name , char is_a_legend);

#endif /* !EX00_H_ */