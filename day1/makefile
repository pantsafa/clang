CC = gcc
CFLAGS = `pkg-config --cflags gtk+-3.0`
LDFLAGS = `pkg-config --libs gtk+-3.0`
SRCS = main.c
TARGET = blue-square-app

all: $(TARGET)

$(TARGET): $(SRCS)
    $(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)

clean:
    rm -f $(TARGET)

