/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** check_eprintf_format
*/

#include <ectypes.h>

bool check_eprintf_format(char const *format)
{
    for (size_t i = 0; format[i]; i++) {
        if (format[i] == '%') {
            return (true);
        }
    }
    return (false);
}