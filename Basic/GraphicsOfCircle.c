/*      Write a program to draw circle, line, rectangle fill with red color.   */



#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // Set fill style to solid fill with red color
    setfillstyle(SOLID_FILL, RED);

    // Draw and fill a circle
    circle(200, 200, 50);
    floodfill(200, 200, WHITE); 

    // Draw and fill a rectangle
    rectangle(100, 100, 300, 250);
    floodfill(101, 101, WHITE); 

    // Draw a line
    line(50, 50, 400, 300);

    getch();
    closegraph();

    return 0;
}
