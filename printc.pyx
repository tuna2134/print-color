import cython

cdef extern from "print.h":
    char print(char word, char color)
    
def print(char word, char color):
    print(word, color)
