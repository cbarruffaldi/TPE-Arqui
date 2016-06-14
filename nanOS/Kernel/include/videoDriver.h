#ifndef VIDEO_DRIVER__H
#define VIDEO_DRIVER__H

void set_color(char color);
void print_str(const char *str, int row, int col);
char current_color();
void put_char(char c);
void put(const char *str, int len);
void put_str(const char *str);
void print_char(char c, int row, int col);
void print_num(int num, int row, int col);
void print(const char *str, int len, int row, int col);
int fill(char red, char green, char blue, int x, int y);
void clear();


#define SCREEN_HEIGHT 768
#define SCREEN_WIDTH 1024
#define CHAR_HEIGHT 16
#define CHAR_WIDTH 8

#define DEFAULT_COLOR 0x0F
#define ERROR_COLOR 0X0C
#define CLEAR_COLOR 0x00

#define HEIGHT 48
#define WIDTH 128

#endif