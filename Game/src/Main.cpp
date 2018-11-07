#include "pch.h"
#include "Main.h"

Main::Main() {
	player = new Player(this);
	ground = new Ground(this);
}

Main::~Main() {

}

void Main::render(sf::RenderWindow* window) noexcept {
	ground->render(window);

	player->render(window);
}

void Main::update() noexcept {
	ground->update();

	player->update();
}
