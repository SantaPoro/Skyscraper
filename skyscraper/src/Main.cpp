#include <SFML/Graphics.hpp>

int main()
{
  sf::ContextSettings context_settings;
  context_settings.antialiasingLevel = 0;
  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!", 7, context_settings);
  sf::CircleShape shape(100.f);
  sf::RectangleShape rect(sf::Vector2f(100.f, 100.f));
  shape.setFillColor(sf::Color::Yellow);
  rect.setFillColor(sf::Color::Blue);
  bool lmao = false;


  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear(sf::Color::Red);


    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
        lmao = true;

    }



    if (lmao) {
        window.draw(shape);
    }
    else {
        window.draw(rect);
    }
    window.display();
  }

  return 0;
}