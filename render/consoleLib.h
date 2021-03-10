#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


/*
Exceptions Start Here 
*/

void NoEntityException(){
    cout << "\n" << "\n" << "Your entity isn't valid, or does not exist.";
}

void NotValidColorException(string cause){
    cout << "\n" << "\n" << "Invalid set color for " << cause << " function.";
}

/*
Exceptions End Here 
*/

void createPollEntity(int Radius){
    for(int i = 0; i < Radius; i++){
        string e[] = {"|"};
        string mradius = e[0] += "|";
        cout << mradius;
    }
}

void createSquareEntity(int Radius){
    for(int i = 0; i < Radius; i++){
        string e[] = {"|_|"};
        string mradius = e[0] += "|_|";
        cout << mradius;
    }
}

void createBracketEntity(int Radius){
    for(int i = 0; i < Radius; i++){
        string e[] = {"("};
        string mradius = e[0] += "(";
        cout << mradius;
    }
}

void createComplexEntity(int Radius, string look){
    for(int i = 0; i < Radius; i++){
        string e[] = {look};
        string mradius = e[0] += look;
        cout << mradius;
    }
}


void RunApplication(string name, string fill_color){
    cout << name;
    if(fill_color == "FORE_WHITE_BG_BLUE"){
        system("Color 1F");
    }
    if(fill_color == "FORE_YELLOW_BG_GREEN"){
        system("Color 2E");
    }
    if(fill_color == "FORE_PURPLE_BG_AQUA"){
        system("Color 3D");
    }
    if(fill_color == "FORE_RED_BG_BLACk"){
        system("Color 04");
    }
    if(fill_color == "FORE_BLACK_BG_YELLOW"){
        system("Color 06");
    }
    if(fill_color == "FORE_GREEN_BG_BLACK"){
        system("Color 0A");
    }
    else{
        NotValidColorException("RunApplication()");
    }
}

void PrintS(string x)
{
    cout << "\n" << x;
}
void PrintI(int x)
{
    cout << "\n" << x;
}
void PrintF(float x)
{
    cout << "\n" << x;
}
void PrintB(bool x)
{
    cout << "\n" << x;
}

void CreateDefaultEntity(int size, string shape, int x, int y)
{

    string EntityShapeOptions[3] = {"POLE_TYPE_FIGURE", "SQUARE_TYPE_FIGURE", "BRACET_TYPE_FIGURE"};

    if(shape == EntityShapeOptions[0]){
        for(int row = 0; row < x; row++){
            for(int col = 0; col < y; col++){
                string e = "\n";
                string ho = " ";
                cout << e;
                cout << ho;
                createPollEntity(size);
            }
        }
    }
    else if(shape == EntityShapeOptions[1]){
        for(int row = 0; row < x; row++){
            for(int col = 0; col < y; col++){
                string e = "\n";
                string ho = "";
                cout << e;
                cout << ho;
                createSquareEntity(size);
            }
        }
    }
    else if(shape == EntityShapeOptions[2]){
        for(int row = 0; row < x; row++){
            for(int col = 0; col < y; col++){
                string e = "\n";
                string ho = "";
                cout << e;
                cout << ho;
                createBracketEntity(size);
            }
        }
    }
    else{
        NoEntityException();
    }
}

void CreateCustomEntity(int Radius, string look, string color){
    if(color == "FORE_WHITE_BG_BLUE"){
        system("Color 1F");
    }
    if(color == "FORE_YELLOW_BG_GREEN"){
        system("Color 2E");
    }
    if(color == "FORE_PURPLE_BG_AQUA"){
        system("Color 3D");
    }
    if(color == "FORE_RED_BG_BLACk"){
        system("Color 04");
    }
    if(color == "FORE_BLACK_BG_YELLOW"){
        system("Color 06");
    }
    if(color == "FORE_GREEN_BG_BLACK"){
        system("Color 0A");
    }
    else{
        NotValidColorException("CreateCustomEntity()");
    }
    createComplexEntity(Radius, look);
}
