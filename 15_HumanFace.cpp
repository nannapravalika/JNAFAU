#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    circle(200, 200, 50);
    circle(185, 190, 5);
    circle(215, 190, 5);
    arc(200, 210, 180, 360, 15);
    getch();
    closegraph();
    return 0;
}
