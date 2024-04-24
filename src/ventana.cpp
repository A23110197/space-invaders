#include<iostream>
#include<string>
#include<thread>
#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    while(true){
        this_thread::sleep_for(0.1s);
        auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Fixed(10));
        Render(Pantalla, border(text("Hola")));
        Pantalla.PixelAt(5, 5).character = 'm';

        int posicionX = 0;
        int posicionY = 0;
        string prueba = "DvD";

        while(true){
            posicionY++;
            }

        for (auto &&letra : prueba)
        {
        Pantalla.PixelAt(posicionX,posicionY).character = letra;
        posicionX++;
        }
    }



    Pantalla.Print();
    return 0;
}

