#include <raylib.h>
#include "grid.h"
int main()
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid [0][0] = 1;
    grid.grid [0][0] = 1;
    grid.grid [0][0] = 1;

    grid.Print();
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();

        EndDrawing();
    }


    CloseWindow();
}