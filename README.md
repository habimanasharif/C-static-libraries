# Static library
## What is a library in c
A library is a collection of objects that are made availbe for use by other program
## Types of Libraries
- Static Libraries
- shared Libraaries 

### Static library
 - static libraries:.a
 - Anything linked in from the staic library is compiled directly into the final project
   - any  changes to static library require recompiled of linked binaries
- Library does not need to reside on target platform
 
#### CREATE STATIC LIBRARY
- ar cr libtest.a source1.o source2.o
   - by convention, libraries start with lib
- create a.h include file defined prototypes for library functions

#### Link with a static library
- gcc source.c -ltest -o outputFile
- -l <include directory>

### COMPILATION
```bash
gcc -c addNumbers.c subNumbers.c // convert to obect files
ar cr libmath.a addNumbers.o subNumbers.o // create library file  to link objects files
gcc domath.c -lmath -o domath -I include -L lib -no-pie -static// complile file with the static libraries
ranlib libmath.a
```


