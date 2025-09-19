#include "magicts.h"

/*
    * Initialize a touch screen, or all available touch screens
    * if `id` is null
    */
void *magicts_initialize(const char *id);


/*
    * Count the number of connected touch screens.
    * You can call this without calling magicts_initialize() first
    */
int magicts_get_screencount(void) { return 0; }

/*
    * Get a list of connected touch screens (as their IDs).
    * You can call this without calling magicts_initialize() first
    */
struct MagicTouchScreenScreenIDList magicts_get_screenids(void) { struct MagicTouchScreenScreenIDList list; return list; }

/*
    * Pump events for all initialized touch screens.
    */
struct TouchData magicts_update(void *ctxPtr) { struct TouchData data; return data; }

/*
    * Deinitialize touch screens and free the resources used by this library.
    */
void magicts_finalize(void *ctxPtr) {}

void magicts_getinputs(void* ctxPtr, float* xArr, float* yArr, int* idArr, int* len) {}
