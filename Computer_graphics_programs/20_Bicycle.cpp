#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    circle(100, 300, 30);
    circle(200, 300, 30);
    line(100, 300, 150, 250);
    line(200, 300, 150, 250);
    line(150, 250, 150, 280);
    getch();
    closegraph();
    return 0;
}
