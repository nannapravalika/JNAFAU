#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(100, 150, 250, 300);
    line(100, 150, 175, 100);
    line(175, 100, 250, 150);
    rectangle(150, 225, 200, 300);
    getch();
    closegraph();
    return 0;
}
