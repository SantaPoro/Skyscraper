#include <SFML/Graphics.hpp>

int main()
{
  sf::ContextSettings context_settings;
  context_settings.antialiasingLevel = 16;
  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!", 7, context_settings);
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Yellow);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear(sf::Color::Blue);
    window.draw(shape);
    window.display();
  }

  return 0;
}