#!/usr/bin/env python
# -*- coding: utf-8 -*-
#

from __future__ import division
def main(args):

    stos = []
    onp = raw_input("Podaj wyrażenie: ")
    operand =""
    for znak in onp:
        if znak !=' ' and znak.isdigit():
            operand +=znak
        elif znak== " "  and len(operand):
            stos.append(operand)
            operand = ""
        elif znak in ('+','-','*','/','%'):
            a =stos.pop()
            b =stos.pop()
            stos.append(eval(str(b)+znak+str(a)))
    print "wynik:", stos.pop()

# tudududuuu
#obliczanie zmiennoprzecinkowe
#wykrywanie błędznego formatu



    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
