#include "lib.h"
void menu(){
	while(1){
		char selectNum;
		
		printf("Please input your choice(0-5):");
		scanf("%c",&selectNum);
		getchar();

		switch(selectNum){
			case '0':
				exit(0);
				break;
			case '1':
				newFile();
				break;
			case '2':
				writeFile();
				break;
			case '3':
				readFile();
				break;
			case '4':
				chmodFile();
				break;
			case '5':
				catChmod();
				break;
			default:
				printf("Error!");
				break;
		}	
	}
}
