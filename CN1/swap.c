#include <SDL.h>
#include <stdlib.h>
#define GAME_WIDTH 400
#define GAME_HEIGHT 400
#define SNAKE_SIZE 40
#define WIDTH_LIMIT 10
#define HEIGHT_LIMIT 10
#define SNAKE_DLAY 100
enum Diretion
{
    LEFT,
    RIGHT,
    UP,
    DOWN
} g_snake_diretion;
const int DX[4] = {-1, +1, 0, 0};
const int DY[4] = {0, 0, -1, +1};

int g_snake_x[100];
int g_snake_y[100];
int g_food_x;
int g_food_y;
int g_snake_length = 3;
SDL_Window *g_window = NULL;
SDL_Renderer *g_renderer = NULL;
SDL_bool g_is_game_running = SDL_TRUE;

SDL_bool init();
void loop();
void render();
void quit();
void reset_food();
void update_snake();
void init_snake();
int main(int argc, char **argv)
{
    if (init())
    {
        init_snake();
        loop();
    }
    quit();
    return 0;
}
void init_snake()
{
    g_snake_x[0] = 2;
    g_snake_y[0] = 0;
    g_snake_x[1] = 1;
    g_snake_y[1] = 0;
    g_snake_x[2] = 0;
    g_snake_y[2] = 0;
    g_snake_diretion = RIGHT;
}
SDL_bool init()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not init sdl: %s", SDL_GetError());
        return SDL_FALSE;
    }

    g_window = SDL_CreateWindow("game loop", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, GAME_WIDTH, GAME_HEIGHT, SDL_WINDOW_SHOWN);

    if (!g_window)
    {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s", SDL_GetError());
        return SDL_FALSE;
    }

    g_renderer = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_ACCELERATED);

    if (!g_renderer)
    {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create renderer: %s", SDL_GetError());
        return SDL_FALSE;
    }

    return SDL_TRUE;
}

void quit()
{
    SDL_DestroyWindow(g_window);
    SDL_Quit();
}

void reset_food()
{
    g_food_x = rand() % WIDTH_LIMIT;
    g_food_y = rand() % HEIGHT_LIMIT;
}

void render()
{
    update_snake();
    SDL_Rect rect;
    rect.w = rect.h = SNAKE_SIZE;
    SDL_SetRenderDrawColor(g_renderer, 255, 0, 0, 255);
    for (int i = 0; i < g_snake_length; i++)
    {
        rect.x = g_snake_x[i] * 40;
        rect.y = g_snake_y[i] * 40;
        SDL_RenderFillRect(g_renderer, &rect);
    }
    rect.x = g_food_x * 40;
    SDL_RenderFillRect(g_renderer, &rect);
    rect.x = g_food_y * 40;
    SDL_RenderFillRect(g_renderer, &rect);
}

void update_snake()
{
    const uint8_t *keystates = SDL_GetKeyboardState(NULL);
    if (keystates[SDL_SCANCODE_UP] && g_snake_diretion != DOWN)
        g_snake_diretion = UP;
    else if (keystates[SDL_SCANCODE_DOWN] && g_snake_diretion != UP)
        g_snake_diretion = DOWN;
    else if (keystates[SDL_SCANCODE_LEFT] && g_snake_diretion != RIGHT)
        g_snake_diretion = LEFT;
    else if (keystates[SDL_SCANCODE_RIGHT] && g_snake_diretion != LEFT)
        g_snake_diretion = RIGHT;
    if (SDL_GetTicks() < SNAKE_DLAY)
    {
        for (int i = g_snake_length - 1; i > 0; i--)
        {
            g_snake_x[i] = g_snake_x[i - 1];
            g_snake_y[i] = g_snake_y[i - 1];
        }
        g_snake_x[0] += DX[g_snake_diretion];
        g_snake_y[0] += DY[g_snake_diretion];
        if (g_snake_x[0] >= WIDTH_LIMIT)
            g_snake_x[0] = 0;
        if (g_snake_y[0] >= HEIGHT_LIMIT)
            g_snake_y[0] = 0;
        if (g_snake_x[0] < 0)
            g_snake_x[0] = WIDTH_LIMIT - 1;
        if (g_snake_y[0] < 0)
            g_snake_y[0] = HEIGHT_LIMIT - 1;
        /*if (g_snake_length > 4)
	{
		for (int i = 4; i < g_snake_length; i++)
		{
			if (g_snake_x[0] == g_snake_x[i] && g_snake_y[0] == g_snake_y[i])
			{
				g_snake_length = 3;
				init_snake();
			}
		}
	}*/
        /*if (g_snake_x[0] == g_food_x && g_snake_y[0] == g_food_y)
	{
		g_snake_length++;
		g_snake_x[g_snake_length - 1] = g_snake_x[g_snake_length - 2];
		g_snake_y[g_snake_length - 1] = g_snake_y[g_snake_length - 2];
		reset_food();
	}*/
    }
}
void loop()
{
    Uint32 start_ticks;
    Uint32 used_ticks;
    Uint32 ticks_per_frame = 1000 / 1000;
    SDL_Event event;

    while (g_is_game_running)
    {
        start_ticks = SDL_GetTicks();
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                g_is_game_running = SDL_FALSE;
            }
        }
        SDL_SetRenderDrawColor(g_renderer, 0, 0, 0, 0);

        SDL_RenderClear(g_renderer);
        render();
        SDL_RenderPresent(g_renderer);
        used_ticks = SDL_GetTicks() - start_ticks;

        //if (used_ticks < ticks_per_frame)
        //{
        //	SDL_Delay(ticks_per_frame - used_ticks);
        //}
        SDL_Delay(200);
    }
}