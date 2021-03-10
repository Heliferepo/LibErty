/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** aled
*/

#include <erty/estdio.h>
#include <string.h>
#include <stdlib.h>
#include <erty/estdlib.h>
#include <erty/string/ecstring.h>
#include <erty/efd.h>
#include <stdio.h>
#include <erty/ebuffer.h>
#include <erty/eprintf.h>
#include <erty/string/esstring.h>
#include <erty/ealloc.h>
#include <malloc.h>
#include <erty/ehashmap.h>
#include <erty/elinked.h>
#include <erty/evector.h>

int main(void)
{
    VECTOR(string) v = VECTOR_CREATE(string);

    v.push_back(&v, init_string("toto"));
    v.push_back(&v, init_string("john"));
    printf("%ld\n", v.size);
    v.sstr[0].print(&v.sstr[0]);
    v.sstr[1].print(&v.sstr[1]);
    printf("%s\n", v.sstr[0].str);

    VECTOR(string) v2 = VECTOR_CREATE(string);
    v2.push_back(&v2, init_string("lol"));
    v2.push_back(&v2, init_string("jpp"));
    printf("%ld\n", v.size);
    v2.sstr[0].print(&v2.sstr[0]);
    v2.sstr[1].print(&v2.sstr[1]);
    printf("%s\n", v.sstr[0].str);



    VECTOR(vstring) vstr = VECTOR_CREATE(vstring);

    vstr.push_back(&vstr, v);
    vstr.push_back(&vstr, v2);

    vstr.vsstr[0].sstr[0].print(&vstr.vsstr[0].sstr[0]);
    vstr.vsstr[1].sstr[1].print(&vstr.vsstr[1].sstr[1]);

    vstr.clear(&vstr);
    return (0);
}