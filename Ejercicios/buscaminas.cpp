#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

//para instalar ncruses
//$ sudo apt-get install libncurses5-dev libncursesw5-dev
//Compliacion
//$ gcc -Wall puzzle15.c -lncurses

int main() {
    int ch='x';

    while(ch!='q') {
         initscr();		/* Start curses mode 		  */
         raw();			/* Line buffering disabled	  */
         noecho();		/* Don't echo() while we do getch */
         move(1,1);
	 system("clear");

	 printw("\nIngrese una letra (q: para salir):\n");
	 printw("> ");
	  
	 ch = getch();		/* If raw() hadn't been called
				 * we have to press enter before it
				 * gets to the program 		  */

	 printw("Acaba de ingresar el caracter %c\n", ch);
	 if (ch=='q' || ch=='Q') { endwin(); return 0; }

	 refresh();
    	 endwin();		/* End curses mode		  */
    }//while

    return 0;
}