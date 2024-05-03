#include <chrono>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp> 
#include <iostream>  
#include <string> 
#include <thread>
#include <utility>
#include <vector>

#include "ftxui/dom/node.hpp" 
#include "ftxui/screen/color.hpp"

int main() {
  using namespace ftxui;
  using namespace std::chrono_literals;

  std::string reset_position;
  for (int index = 0; index < 200; ++index) {
    std::vector<Element> entries;
    for (int i = 0; i < 23; ++i) {
      if (i != 0)
        entries.push_back(separator());
      entries.push_back(  //
          hbox({
              text(std::to_string(i)) | size(WIDTH, EQUAL, 2),
              separator(),
              spinner(i, index) | bold,
          }));
    }
    auto document = hbox({
        vbox(std::move(entries)) | border,
        filler(),
    });
    auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
    Render(screen, document);
    std::cout << reset_position;
    screen.Print();
    reset_position = screen.ResetPosition();

    std::this_thread::sleep_for(0.1s);
  }
  std::cout << std::endl;
}