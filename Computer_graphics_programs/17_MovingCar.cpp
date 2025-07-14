#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    for (i = 0; i < 300; i++) {
        cleardevice();
        rectangle(50+i, 200, 150+i, 250);
        circle(70+i, 260, 10);
        circle(130+i, 260, 10);
        delay(30);
    }
    getch();
    closegraph();
    return 0;
}
