// ConwaysGameOfLife.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Framework.h"

int main()
{
	Framework::init(800, 800, "Conway's Game Of Life", sf::Style::None | sf::Style::Close);
	Framework::run();

    return 0;
}

