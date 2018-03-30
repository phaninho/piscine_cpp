#include <ncurses.h>
#include <iostream>
#include "Box.hpp"

void display_win(WINDOW *win)
{
    move(0, 45);
    printw("SPACE INVADERS");

    refresh();    
    box(win, 0, 0);
    wrefresh(win);
}

int main()
{
    int ch = 0;
    int posx;
    int posy;
    int xmax, ymax;

    initscr();
    
    refresh();
    getmaxyx(stdscr, ymax, xmax);

    Box b(ymax - (ymax / 3) , xmax - (xmax / 3), 3, 5);    
    WINDOW *win =newwin(b.height, b.width, b.start_y, b.start_x);
    keypad(stdscr, TRUE);
   
    display_win(win);
    posx = 7;
    posy = (ymax / 3);
    move((ymax - (ymax / 3)) / 2 , (xmax / 4));    
    printw("press Enter to start the game");
    
    while (ch != 27)
    {
    
        ch = getch();
        noecho();
        // std::cout << "getch = " <<  ch;
        if (ch == 10)
        {
            clear();
            display_win(win);                               
            move(posy, posx);
            while (ch != 27)
            {
                ch = getch();
                if(ch == KEY_DOWN && posy < b.height + (b.start_y - 2))
                    posy++;
                else if(ch == KEY_UP && posy > b.start_y + 1)
                    posy--;
                else if(ch == KEY_RIGHT && posx < b.start_x + (b.width - 2))
                    posx++;
                else if(ch == KEY_LEFT && posx > b.start_x + 1)
                    posx--;    
                noecho();
                move(posy, posx);            
            }
            if (ch == 27)
                break;
        }
    }
    endwin();
    return (0);
}