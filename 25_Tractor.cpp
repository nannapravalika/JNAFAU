#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\Turboc3\BGI");
    rectangle(100, 200, 200, 250);
    rectangle(200, 180, 300, 250);
    circle(120, 260, 20);
    circle(280, 260, 30);
    getch();
    closegraph();
    return 0;
}
