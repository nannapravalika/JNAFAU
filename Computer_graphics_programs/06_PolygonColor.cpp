#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int points[] = {150, 150, 250, 100, 350, 150, 300, 250, 200, 250, 150, 150};
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    setfillstyle(SOLID_FILL, RED);
    fillpoly(6, points);
    getch();
    closegraph();
    return 0;
}
