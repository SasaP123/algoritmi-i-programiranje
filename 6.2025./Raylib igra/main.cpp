#include <raylib.h>


int main()
{
    int ballX = 400;
    int ballY = 300;

    Color blue = {20, 100, 255, 255};

    InitWindow(800,600,"My FIRST Raylib program");
    SetTargetFPS(60);

    //Game Loop
    while(WindowShouldClose()==false)
        {
            // 1. Event handling
            if(IsKeyDown(KEY_D))
                {
                    ballX += 3;
                } if(IsKeyDown(KEY_A))
                    {
                        ballX -= 3;
                    } if(IsKeyDown(KEY_W))
                        {
                            ballY -= 3;
                        } if(IsKeyDown(KEY_S))
                            {
                                ballY += 3;
                            }
            // 2. Updating positions

            // 3. Drawing
            BeginDrawing();
            ClearBackground(blue);
            DrawCircle(ballX, ballY, 20, WHITE);
            EndDrawing();
        }


    CloseWindow();
    return 0;
}
