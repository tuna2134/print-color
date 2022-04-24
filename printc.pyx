import cython
cimport printc
    
def printc(str word, str color):
    printc.printcolor(word, color)
