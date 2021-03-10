#include "render/consoleLib.h"

int main(){
    RunApplication("My Application", "FORE_GREEN_BG_BLACK");
    CreateDefaultEntity(4, "SQUARE_TYPE_FIGURE", 2, 2);
    CreateCustomEntity(4, "*", "FORE_GREEN_BG_BLACK");
}