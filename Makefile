CC 		 = gcc
CFLAGS = -Wall -Wextra 

OBJS	 = crc32.o crc32_test.o
TARGET = crc32

all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

crc32 : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<
