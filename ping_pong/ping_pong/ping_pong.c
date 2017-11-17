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
#include "ps2.h"


states current_state = IDLE;
int oled_flag = 0;
int place = 0;
int highest_score;


int main(void) {
	
	// Disable global interrupts
	cli();
	UART_init(31);
	
	register_init();
	oled_init();
	ADC_init();
	//CAN_init();
	//ps2_init();
	//Enable global interrupts
	sei();
	printf("hei\n");
	/*IKKE FJ�RN*/
	menu_setup();
	read_highscore_list();

	
	
	//ps2_configmode();
	//ps2_analogmode();
	//ps2_exitconfig();
	
	
	
	while(1){
		printf("while\n");
		//ps2_poll(100, 100);
	/*

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
			case RESET_HIGHSCORE:
				reset_highscore_list();
				current_state = HIGHSCORE;
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
			case NEW_HIGHSCORE:
				place = check_highscore(highest_score);
				char* nickname;
				
				if ( place  > -1){
					nickname = oled_type_in_name(highest_score);
					
					insert_highscore(place, highest_score, nickname);
				}
				current_state = HIGHSCORE;
				break;
			default:
				break;
		}
	*/}
	return 0;
}

