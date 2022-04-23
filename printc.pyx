import cython

cdef extern from "print.h":
    int print(char word, char color)
    
def print(char word, char color):
    print(word, color)
