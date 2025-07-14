#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(100, 100, 300, 300);
    rectangle(150, 150, 250, 250);
    getch();
    closegraph();
    return 0;
}
