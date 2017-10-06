/*
 * menu_framework.c
 *
 * Created: 27.09.2017 14:05:47
 *  Author: andrholt
 */ 

#include "OLED_driver.h"
#include "menu_framework.h"

#include <stddef.h>

void print_menu_oled(menu* menu_node, int page){
	oled_reset();
	oled_home();
	oled_print_string(menu_node->name);
	
	menu* current = menu_node->child;
	int page_count = 1; 
	while(current != NULL){
		oled_goto_page(page_count);
		oled_goto_column(15);
		oled_print_string(current->name);
		current = current->next_sibling;
		page_count++;
	}
	print_selection_sign(page);
}

menu* create_menu(char* new_name){
	menu* new_menu = (menu*)malloc(sizeof(menu));
	
	if(new_menu == NULL){
		printf("Out of memory! Failed to create menu");
		exit(1);
	}
	
	new_menu->name = new_name;
	new_menu->next_sibling = NULL;
	new_menu->prev_sibling = NULL;
	new_menu->parent = NULL;
	new_menu->child = NULL;
	new_menu->number_of_childs = 0;
	
	return new_menu;
}

menu* create_submenu(menu* parent_menu, menu* child_menu){ //tar inn liste av submenu struct
	if (parent_menu->child == NULL){
		//make new child
		parent_menu->child = child_menu;
	}
	
	else{
		//make new sibling
		menu* current = parent_menu->child;
		while (current->next_sibling != NULL){
			current = current->next_sibling;
		}
		
		current->next_sibling =child_menu;
		child_menu->prev_sibling =current;
		
	}
	parent_menu->number_of_childs++;
	child_menu->parent = parent_menu;
	
	return parent_menu;
}


menu* update_display_menu(menu* current_menu, int page, joystick_dir dir){
	menu* current = current_menu->child;
	if(dir == RIGHT){
		for(int i = 1; i < page; i++){
				current = current->next_sibling;
		}
	}else{
		current = current_menu->parent;
	}
	
	
	
	if(current != NULL){
		return current;
	}
	return current_menu;
}


void print_selection_sign(int page){
	oled_goto_column(0);
	oled_goto_page(page);
	oled_print_string("*");
}


