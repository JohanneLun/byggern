/*
 * oled1.h
 *
 * Created: 20.09.2017 18:25:38
 *  Author: andrholt
 */ 


#ifndef OLED1_H_
#define OLED1_H_


#include <stdint.h>

#define ext_oled_cmd  ((volatile char*) 0x1000)
#define ext_oled_data ((volatile char*) 0x1200)
#define ext_OLED_size 0x200
#define ASCII_OFFSET ((volatile unsigned int) 32)

void OLED_init(void);
void OLED_print(unsigned char c);
void OLED_reset(void);
void OLED_home(void);
void OLED_goto_page(uint8_t page);
void OLED_goto_column(uint8_t column);
void OLED_clear_page(uint8_t page);
void OLED_pos(uint8_t row, uint8_t col);

void OLED_clear(void);
void OLED_print_str(const char* data);



#endif /* OLED1_H_ */