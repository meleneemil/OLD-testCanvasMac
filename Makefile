
CC = g++

#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

# the build target executable:
TARGET = testCanvas

INCDIRS=$(ROOTSYS)/include
LIBDIRS=$(ROOTSYS)/lib
LIBS = -lCore -lHist -lGpad

SOURCES = main.cpp

# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
main: $(OBJS) 
	$(CC) $(CFLAGS) -I$(INCDIRS) -o $(TARGET) $(SOURCES) -L$(LIBDIRS) $(LIBS)
clean:
	rm -rf *.o *~ $(TARGET)

.PHONY: clean
