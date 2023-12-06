#!/usr/bin/python3

def weight_average(my_list=[]):
    if not my_list:
        return 0

    fnum = 0
    fen = 0

    for f in my_list:
        num += f[0] * f[1]
        fen += f[1]

    return (fnum / fen)
