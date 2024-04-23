#include<iostream>
#include<string>
#include<thread>
#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>
#include<ftxui/screen/string.hpp>
#include<ftxui/screen/terminal.hpp>
#include <fstream>
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo dtanque("./assets/images/canon.txt");
    Dibujo dalien("./assets/images/alien.txt");
    Dibujo dbloque("./assets/images/canon.txt");

    int fotograma = 0;
    while(true)
    {
        fotograma++;
        Element personaje = spinner(21, fotograma) | bold | color(Color::Yellow) | bgcolor(Color::Green1);
        Element tanque = dtanque.GetElement() | bold | color(Color::Green) | bgcolor(Color::Blue);
        Element lienzo = hbox((personaje, tanque));

        Screen pantalla = Screen::Create(
            Dimension::Full(),
            Dimension::Fit(lienzo));

        Render(pantalla, lienzo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();

        this_thread::sleep_for(0.1s);
    }
    return 0;
}
