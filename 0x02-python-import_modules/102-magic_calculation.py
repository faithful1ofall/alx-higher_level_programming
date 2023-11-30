#!/usr/bin/python3
if __name__ == "__import__":
    def magic_calculation(a, b):
        from magic_calculation_102 import add, sub
        if a < b:
            c = add(a, b)
            for n in range(4, 6):
                c = add(c, n)
            return (c)
        else:
            return(sub(a, b))
