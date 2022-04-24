from distutils.core import setup, Extension
from Cython.Build import cythonize

ext = Extension("pc", sources=["printc.pyx", "print.c"], include_dirs=['.'])
setup(name="printcolor", ext_modules=cythonize([ext]))
