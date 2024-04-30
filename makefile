bin/test : src/tui_test.cpp
	g++ src/tui_test.cpp -o bin/test -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude

bin/space : src/main.cpp
	g++ src/main.cpp -o bin/space -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude

bin/window : src/ventana.cpp
	g++ src/ventana.cpp -o bin/window -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude

run : bin/space
	./bin/space

runtest : bin/test
	./bin/test

runventana : bin/window
	./bin/window
