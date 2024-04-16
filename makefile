
OBJETIVO : INGREDIENTES
	PASO1
	PASO2
	PASO3

bin/test : src/tui_test.cpp
	g++ src/tui_test.cpp -o bin/test

ejecutar : bin/test
	./bin/test

hola : receta2
	echo hola mundo

receta2 :
	echo receta2