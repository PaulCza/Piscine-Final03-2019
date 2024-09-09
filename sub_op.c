/*
** EPITECH PROJECT, 2019
** sub_op
** File description:
** bistro
*/

#include "my.h"

char* sub_op(char *str, char *sub)
{
    char *yolo;
    char model[] = "()+-*/%";
    int a;
    int b;

    b = 0;
    yolo = my_strdup(str);
    while (sub[b] != '\0'){
        a = 0;
        while (yolo[a] != '\0'){
            if (yolo[a] == sub[b]){
                yolo[a] = model[b];
            }
            a = a + 1;
        }
        b = b + 1;
    }
    return (yolo);
}