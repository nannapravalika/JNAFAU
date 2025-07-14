#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int triangle[] = {150, 150, 200, 100, 250, 150, 150, 150};
    int pentagon[] = {200, 200, 250, 180, 300, 200, 275, 250, 225, 250, 200, 200};
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    drawpoly(4, triangle);
    drawpoly(6, pentagon);
    getch();
    closegraph();
    return 0;
}
