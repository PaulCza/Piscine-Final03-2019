/*
** EPITECH PROJECT, 2019
** basesub.c
** File description:
** bistro
*/

#include "my.h"

char* basesub(char *str, char *sub)
{
    int a;
    int b;
    int c;
    char *yolo;

    yolo = my_strdup(str);
    b = 0;
    c = 0;
    while (sub[b] != '\0'){
        a = 0;
        while (str[a] != '\0'){
            if (str[a] == sub[b]){
                yolo[a] = 48 + c;
            }
            a = a + 1;
        }
        b = b + 1;
        c = c + 1;
    }
    return (yolo);
}