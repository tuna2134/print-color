import cython

cdef extern from "print.h":
    cdef int print(char word, char color)
    
def print(char word, char color):
    print(word, color)
