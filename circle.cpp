#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    circle(320, 240, 100);
    line(100, 100, 500, 350);

    getch();
    closegraph();

    return 0;
}
