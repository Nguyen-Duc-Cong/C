#ifndef __FLAPPY__BIRD__GAME__HPP__
#define __FLAPPY__BIRD__GAME__HPP__

class FlappyBirdGame
{
public:
    FlappyBirdGame(/* args */);
    ~FlappyBirdGame();
    void start();
private:
    bool init();
    void loop();
    SDL_Window* g_window;
    SDL_renderer* g_renderer;


};

FlappyBirdGame::FlappyBirdGame(/* args */)
{
}

FlappyBirdGame::~FlappyBirdGame()
{
}
