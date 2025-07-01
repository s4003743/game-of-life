#include <raylib.h>

int main() 
{
    // Initialize the window    
    const int screen_width = 1280;
    const int screen_height = 800;
    
    InitWindow(screen_width, screen_height, "Pong");
    SetTargetFPS(12);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        EndDrawing();
    }   
    CloseWindow();
}