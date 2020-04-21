#include <stdio.h>
#include <stdlib.h>
//#include <X11/Xlib.h>
//#include <X11/Xutil.h>

#include "graphics_x11/screen_x11.h"

int main(int argc, char *argv[]) {
    screen_settings_t *screen_settings = malloc(sizeof(screen_settings));
    screen_settings->window_title = "Window Example";
    screen_settings->xsize = 800;
    screen_settings->ysize = 600;
    screen_x11_t *screen_x11 = init_screen_x11(screen_settings);
    run_event_loop(screen_x11, NULL, NULL, NULL, NULL);
    return 0;
}
