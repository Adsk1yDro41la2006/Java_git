#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{

    RenderWindow window(VideoMode(400, 400), "SFML works!");

    RectangleShape rectangle;
    rectangle.setFillColor(Color::Transparent);
    rectangle.setSize(Vector2f(100, 100));
    rectangle.setOutlineColor(Color::Red);
    rectangle.setOutlineThickness(5);
    rectangle.setPosition(20, 20);

    RectangleShape rectangle2;
    rectangle2.setFillColor(Color::Transparent);
    rectangle2.setSize(Vector2f(200, 300));
    rectangle2.setOutlineColor(Color::Black);
    rectangle2.setOutlineThickness(5);
    rectangle2.setPosition(70, 70);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear(Color::White);
        window.draw(rectangle);
        window.draw(rectangle2);
        window.display();
    }

    return 0;
}
