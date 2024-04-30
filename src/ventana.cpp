#include<iostream>
#include<string>
#include<thread>
#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>
#include<Dibujo.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo palabra1;
    Dibujo palabra2;

    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    while(true){
        this_thread::sleep_for(0.1s);

        palabra1.Dibujar(Pantalla);
        palabra2.Dibujar(Pantalla);
    }
    Pantalla.Print();
    Pantalla.Clear();
    cout<<Pantalla.ResetPosition();

    return 0;
}

