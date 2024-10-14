#include "raylib.h"

#define SCREEN_WIDTH (1280)
#define SCREEN_HEIGHT (720)

#define WINDOW_TITLE "raylib c++ programming language template"

int main(int countArgs, char** args)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(60);

    // Texture2D texture = LoadTexture(ASSETS_PATH"test.png");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // const int texture_x = SCREEN_WIDTH / 2 - texture.width / 2;
        // const int texture_y = SCREEN_HEIGHT / 2 - texture.height / 2;
        // DrawTexture(texture, texture_x, texture_y, WHITE);

        const char* text = "raylib with c++ programming language!";
        const Vector2 text_size = MeasureTextEx(GetFontDefault(), text, 40, 2);
        DrawText(text, SCREEN_WIDTH / 2 - text_size.x / 2, SCREEN_HEIGHT / 2 - text_size.y / 2, 40, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
