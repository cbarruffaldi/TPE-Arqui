include ../Makefile.inc

MODULE=0000-sampleCodeModule.bin
ASMSOURCES=$(wildcard *.asm)
SOURCES=sampleCodeModule.c shell.c syscalls.c stdio.c strings.c time.c paint.c fractals.c ctype.c commands.c stdlib.c
ASMOBJECTS=$(ASMSOURCES:.asm=.o)
COBJECTS=$(SOURCES:.c=.o)

%.o: %.c
	$(GCC) $(GCCFLAGS) -I./include -c $< -o $@

%.o: %.asm
	$(ASM) $(ASMFLAGS) $< -o $@

all: $(USER)

$(USER): $(ASMOBJECTS) $(COBJECTS)
	$(LD) -T sampleCodeModule.ld $(COBJECTS) $(ASMOBJECTS) -o ../$(MODULE)

clean:
	rm -rf *.o

.PHONY: all clean
