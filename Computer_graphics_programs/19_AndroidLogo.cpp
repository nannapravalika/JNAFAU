#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    circle(200, 200, 50);
    line(160, 180, 140, 160);
    line(240, 180, 260, 160);
    getch();
    closegraph();
    return 0;
}
