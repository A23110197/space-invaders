#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>

int main(){
    using namespace ftxui;

    //crea los elementos de la interfaz de usuario.
    auto label = text(L"Hola, mundo!");
    auto container = hbox((label));

    //crea la pantalla y establece el contenido.
    auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(container));

    Render(screen,container);
    screen.Print();

    return 0;
}