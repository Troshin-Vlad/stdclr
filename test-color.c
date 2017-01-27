#include <stdio.h>
#include "stdclr.h"

#define STR "Test String"

int main(){

	printf("Text attributes:\n");
	printf("Bold: %s%s%s\n",TEXT_BLD,STR,TEXT_DEF);
	printf("Hidden: %s%s%s\n",TEXT_HID,STR,TEXT_DEF);
	printf("Inline: %s%s%s\n",TEXT_INL,STR,TEXT_DEF);
	printf("Under line: %s%s%s\n",TEXT_UND,STR,TEXT_DEF);
	printf("Revers: %s%s%s\n",TEXT_REV,STR,TEXT_DEF);
	printf("Normal: %s%s%s\n\n",TEXT_NRM,STR,TEXT_DEF);

	printf("Text color:\n");
	printf("Black: %s%s%s\n",TEXT_CLR_BLK,STR,TEXT_DEF);
	printf("Red: %s%s%s\n",TEXT_CLR_RED,STR,TEXT_DEF);
	printf("Green: %s%s%s\n",TEXT_CLR_GRN,STR,TEXT_DEF);
	printf("Drown: %s%s%s\n",TEXT_CLR_DRW,STR,TEXT_DEF);
	printf("Blue: %s%s%s\n",TEXT_CLR_BLU,STR,TEXT_DEF);
	printf("Purpur: %s%s%s\n",TEXT_CLR_PUR,STR,TEXT_DEF);
	printf("Aqua: %s%s%s\n",TEXT_CLR_AQU,STR,TEXT_DEF);
	printf("Grey: %s%s%s\n\n",TEXT_CLR_GRY,STR,TEXT_DEF);

	printf("Background color:\n");
	printf("Black: %s%s%s\n",BACK_CLR_BLK,STR,TEXT_DEF);
	printf("Red: %s%s%s\n",BACK_CLR_RED,STR,TEXT_DEF);
	printf("Green: %s%s%s\n",BACK_CLR_GRN,STR,TEXT_DEF);
	printf("Drown: %s%s%s\n",BACK_CLR_DRW,STR,TEXT_DEF);
	printf("Blue: %s%s%s\n",BACK_CLR_BLU,STR,TEXT_DEF);
	printf("Purpur: %s%s%s\n",BACK_CLR_PUR,STR,TEXT_DEF);
	printf("Aqua: %s%s%s\n",BACK_CLR_AQU,STR,TEXT_DEF);
	printf("Grey: %s%s%s\n\n",BACK_CLR_GRY,STR,TEXT_DEF);
	
	return 0;
}