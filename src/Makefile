CC = gcc
PROGRAMS = cst
GCC_CFLAGS = -rdynamic 
cst_HEADERS = \
cst-common.h \
cst.h

cst_SOURCES = \
cst.c


SOURCES = $(cst_SOURCES)
HEADERS = $(cst_HEADERS)

all:
	$(CC) $(GCC_CFLAGS) $(SOURCES) -o ${PROGRAMS}

clean:
	rm -f $(PROGRAMS)
