#include <raylib.h>

int main() 
{
    // Initialize the window    
    const int screen_width = 800;
    const int screen_height = 600;
    
    InitWindow(screen_width, screen_height, "Game of Life");
    SetTargetFPS(12);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        EndDrawing();
    }   
    CloseWindow();
}