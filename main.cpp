#include <iostream>
#include <SDL/SDL.h>
#include <GL/glew.h>
#include <GL/glu.h>
#include <math.h>
#include <string>
#include <string.h>
#include <time.h>

#include "text3d.cpp"
#include "functions.cpp"

int main(int, char**)
{
    atexit(stop);
    init_SDL();
    init_OpenGL();
    init_cubes();

    while(1){
        new_game();
        game_on();
        game_over();
    }

    return 0;
}
