/*
 * ping_pong.c
 *
 * Created: 01.09.2017 09:13:19
 *  Author: julihag
 */ 

#define F_CPU 4915200

#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>


#include "driver_uart.h"
#include "bit_functions.h"
#include "register_init.h"
#include "sram_test.h"
#include "OLED_driver.h"
#include "ADC_driver.h"
#include "joystick.h"
#include "menu_framework.h"
#include "CAN_driver.h"
#include "SPI_driver.h"
#include "MCP2515_driver.h"
#include "MCP2515.h"
#include "highscore.h"
#include "game.h"


states current_state = IDLE;
int oled_flag = 0;



int main(void) {
	// Disable global interrupts
	cli();
	UART_init(31);
	register_init();
	oled_init();
	ADC_init();
	CAN_init();
	//Enable global interrupts
	sei();
	
	
	menu_setup();
	//update_highscore_list();
	//insert_highscore(1, 5, "HEI");
	//insert_highscore(1, 10, "YOO");
	//oled_print_highscore();
	
	while(1){
		
		switch(current_state){
			case IDLE:
				main_menu();
				break;
			case EASY:
				play_game(EASY);
				break;
			case MEDIUM:
				play_game(MEDIUM);
				break;
			case HARD:
				play_game(HARD);
				break;
			case HIGHSCORE:
				if(find_joystick_dir() == LEFT){
					current_state = IDLE; 
				}
				if (oled_flag){
					oled_print_highscore();
					oled_flag = 0;
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

