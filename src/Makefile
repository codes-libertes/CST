CC = gcc
PROGRAMS = cst

cst_HEADERS = \
cst-common.h \
cst.h

cst_SOURCES = \
cst.c


SOURCES = $(cst_SOURCES)
HEADERS = $(cst_HEADERS)

all:
	$(CC) $(SOURCES) -o ${PROGRAMS}

clean:
	rm -f $(PROGRAMS)
