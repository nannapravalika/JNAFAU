#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    for (i = 0; i < 300; i += 5) {
        cleardevice();
        circle(50 + i, 100, 30);
        delay(50);
    }
    getch();
    closegraph();
    return 0;
}
