#!/usr/bin/python3

def magic_calculation(a, b):
    """Match bytecode provided by Holberton School."""
    from magic_calculation_102 import add, sub

    if a < b:
        fc = add(a, b)
        for i in range(4, 6):
            fc = add(fc, i)
        return (fc)

    else:
        return(sub(a, b))
