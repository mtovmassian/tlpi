TLPI_DIR = ..
TLPI_INCL_DIR = ${TLPI_DIR}/lib

CC=gcc

CFLAGS = \
	-std=c17 \
	-g \
	-Wall \
	-Wextra \
	-pedantic \
	-I${TLPI_INCL_DIR}
