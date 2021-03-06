#ifndef Language_symbol_h
#define Language_symbol_h

#define NSYMS 512
#define INT_SIZE 4
#define DEBUG 0

#include <string.h>
#include "list.h"



typedef struct symbol_table
{
	char *name;
	int value;
	int address;
    int pointer;
} symbol_table;

symbol_table * find_by_name(char *s) ;

symbol_table * find_by_address(int address) ;

int printSymTab(void);

void setValue(symbol_table * symtable, int value);

void setAddress(symbol_table * symtable, int address);

#endif
