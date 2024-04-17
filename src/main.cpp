#include<iostream>
#include<string>
#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Element lienzo = hbox((
        spinner(21,1)

    ));

    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(lienzo)
    );

    Render(pantalla,lienzo);
    pantalla.Print();
    pantalla.ResetPosition();

    return 0;
}
