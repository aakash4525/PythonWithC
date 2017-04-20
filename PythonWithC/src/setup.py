'''
    Usage (Windows):- 
        python setup.py build => to create pyd file
        python setup.py install => will install the module
        python setup.py sdist => create distribution
        python setup.py bdist_wininst => binary distribution
'''

from distutils.core import setup, Extension

module1 = Extension("display", sources=["displaymodule.c"])

setup(name = 'first',
      version = '1.0',
      description = 'This is a demo package',
      author = 'Akash Ahmed',
      author_email = 'aksben65@gmail.com',
#       url = 'author_website',
      long_description = '''This is really just a demo package.''',
      ext_modules = [module1])