#include <iostream>
#include <ctime>
#include <cmath>
#include <vector>

#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

float abc(float x)
{
    if(x < 0)
    {
        x = x * (-1);
    }

    return x;
}

int main()
{
    int deadBalls = 0;

    float oldRadius = 0;

    int circlesValue;

    float ENEMIES_SPEED = 0.5;

    std::srand(time(NULL));

    std::vector <CircleShape> enemies;

    float time;

    RenderWindow window2(VideoMode(1800, 1000), "Main menu");

    RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(200, 50));
    rectangle.setFillColor(Color::Green);
    rectangle.setPosition(800, 250);

    RectangleShape rectangle2;
    rectangle2.setSize(sf::Vector2f(200, 50));
    rectangle2.setFillColor(Color::Cyan);
    rectangle2.setPosition(800, 450);

    RectangleShape rectangle3;
    rectangle3.setSize(sf::Vector2f(200, 50));
    rectangle3.setFillColor(Color::Red);
    rectangle3.setPosition(800, 650);

    RectangleShape rectangle4;
    rectangle4.setSize(sf::Vector2f(200, 50));
    rectangle4.setFillColor(Color::Yellow);
    rectangle4.setPosition(800, 850);

    Font f;
    if(!f.loadFromFile("../../resources/arial.ttf"))
        return EXIT_FAILURE;

    Text textMainMenu("Main menu", f);
    textMainMenu.setCharacterSize(50);
    textMainMenu.setFillColor(Color::Black);
    textMainMenu.setPosition(780, 60);

    Text textEasy("Easy", f);
    textEasy.setCharacterSize(30);
    textEasy.setFillColor(Color::Black);
    textEasy.setPosition(865, 260);

    Text textMedium("Medium", f);
    textMedium.setCharacterSize(30);
    textMedium.setFillColor(Color::Black);
    textMedium.setPosition(850, 460);

    Text textHard("Hard", f);
    textHard.setCharacterSize(30);
    textHard.setFillColor(Color::Black);
    textHard.setPosition(865, 660);

    Text textInstruction("Instruction", f);
    textInstruction.setCharacterSize(30);
    textInstruction.setFillColor(Color::Black);
    textInstruction.setPosition(830, 860);

    Texture agario;
    if (!agario.loadFromFile("../../resources/Agario.png"))
    {
        return -1;
    }

    Sprite fone;
    fone.setTexture(agario);
    fone.setPosition(1, 1);
    fone.scale(1.5, 1.5);

    while (window2.isOpen())
    {
        Event event;
        while (window2.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window2.close();

            if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    sleep(milliseconds(1000));
                    if(rectangle.getGlobalBounds().contains(Mouse::getPosition(window2).x, Mouse::getPosition(window2).y))
                    {
                        circlesValue = 5;
                        time = 15;

                        for(int i = 0; i < circlesValue; i++)
                        {
                            int xPos = std::rand() % 2;
                            int yPos = std::rand() % 2;
                            CircleShape Ball;
                            Ball.setRadius(5 + std::rand() % 50 * 1.2);
                            if(xPos == 0)
                            {
                                if(yPos == 0)
                                    Ball.setPosition(10 + std::rand() % 750, 10 + std::rand() % 350);
                                else
                                    Ball.setPosition(10 + std::rand() % 750, 500 + std::rand() % 550);
                            }
                            else
                            {
                                if(yPos == 0)
                                    Ball.setPosition(950 + std::rand() % 750, 10 + std::rand() % 350);
                                else
                                    Ball.setPosition(950 + std::rand() % 750, 500 + std::rand() % 550);
                            }
                            Ball.setFillColor(Color::Green);
                            enemies.push_back(Ball);
                        }
                        window2.close();
                    }

                    else  if(rectangle2.getGlobalBounds().contains(Mouse::getPosition(window2).x, Mouse::getPosition(window2).y))
                    {
                        circlesValue = 10;
                        time = 17;

                        for(int i = 0; i < circlesValue; i++)
                        {
                            int xPos = std::rand() % 2;
                            int yPos = std::rand() % 2;
                            CircleShape Ball;
                            Ball.setRadius(5 + std::rand() % 50 * 1.5);
                            if(xPos == 0)
                            {
                                if(yPos == 0)
                                    Ball.setPosition(10 + std::rand() % 750, 10 + std::rand() % 350);
                                else
                                    Ball.setPosition(10 + std::rand() % 750, 500 + std::rand() % 550);
                            }
                            else
                            {
                                if(yPos == 0)
                                    Ball.setPosition(950 + std::rand() % 750, 10 + std::rand() % 350);
                                else
                                    Ball.setPosition(950 + std::rand() % 750, 500 + std::rand() % 550);
                            }
                            Ball.setFillColor(Color::Green);
                            enemies.push_back(Ball);
                        }
                        window2.close();
                    }

                    else  if(rectangle3.getGlobalBounds().contains(Mouse::getPosition(window2).x, Mouse::getPosition(window2).y))
                    {
                        circlesValue = 20;
                        time = 20;

                        for(int i = 0; i < circlesValue; i++)
                        {
                            int xPos = std::rand() % 2;
                            int yPos = std::rand() % 2;
                            CircleShape Ball;
                            Ball.setRadius(5 + std::rand() % 50 * 1.8);
                            if(xPos == 0)
                            {
                                if(yPos == 0)
                                    Ball.setPosition(10 + std::rand() % 750, 10 + std::rand() % 350);
                                else
                                    Ball.setPosition(10 + std::rand() % 750, 500 + std::rand() % 550);
                            }
                            else
                            {
                                if(yPos == 0)
                                    Ball.setPosition(950 + std::rand() % 750, 10 + std::rand() % 350);
                                else
                                    Ball.setPosition(950 + std::rand() % 750, 500 + std::rand() % 550);
                            }
                            Ball.setFillColor(Color::Green);
                            enemies.push_back(Ball);
                        }
                        window2.close();
                    }
                    else  if(rectangle4.getGlobalBounds().contains(Mouse::getPosition(window2).x, Mouse::getPosition(window2).y))
                    {
                        RenderWindow window3(VideoMode(1800, 1000), "Instruction");

                        Texture agario;
                        if (!agario.loadFromFile("../../resources/Agario.png"))
                        {
                            return -1;
                        }

                        Sprite fone;
                        fone.setTexture(agario);
                        fone.setPosition(1, 1);
                        fone.scale(1.5, 1.5);

                        Text textInstruction("Instruction", f);
                        textInstruction.setCharacterSize(50);
                        textInstruction.setFillColor(Color::Black);
                        textInstruction.setPosition(820, 260);

                        Text textBigInstruction("Tab \"Up\" to move up \n\nTab \"Left\" to move left \n\nTab \"Down\" to move down \n\nTab \"Right\" to move right \n\nTab \"Space\" to come back to main menu", f);
                        textBigInstruction.setCharacterSize(30);
                        textBigInstruction.setFillColor(Color::Black);
                        textBigInstruction.setPosition(750, 600);

                        while (window3.isOpen())
                        {
                            Event event;
                            while (window3.pollEvent(event))
                            {
                                if (event.type == Event::Closed)
                                    window3.close();

                                if(event.type == Event::KeyPressed)
                                {
                                    if (event.key.code == Keyboard::Space)
                                    {
                                        window3.close();
                                    }
                                }
                                window3.clear(Color::White);

                                window3.draw(fone);

                                window3.draw(textBigInstruction);
                                window3.draw(textInstruction);

                                window3.display();
                            }
                        }
                    }
                }
            }
            window2.clear(Color::White);

            window2.draw(fone);

            window2.draw(rectangle);
            window2.draw(rectangle2);
            window2.draw(rectangle3);
            window2.draw(rectangle4);

            window2.draw(textEasy);
            window2.draw(textMedium);
            window2.draw(textHard);
            window2.draw(textInstruction);
            window2.draw(textMainMenu);

            window2.display();
        }
    }


    RenderWindow window(VideoMode(1800, 1000), "Agario");

    View myView = window.getView();

    CircleShape player;
    player.setRadius(50);
    player.setPosition(850, 450);
    player.setFillColor(Color::Cyan);

    Texture fon;
    if (!fon.loadFromFile("../../resources/background.jpg"))
    {
        return -1;
    }

    Sprite background;
    background.setTexture(fon);

    background.scale(3.5, 3.3);

    Texture enem;
    if (!enem.loadFromFile("../../resources/angryball.jpg"))
    {
        return -1;
    }

    Sprite angryball;
    angryball.setTexture(enem);

    Font font;
    if(!font.loadFromFile("../../resources/arial.ttf"))
        return EXIT_FAILURE;

    Text textLose("You lose!", font);
    textLose.setCharacterSize(18.75);
    textLose.setFillColor(Color::Red);
    textLose.setPosition(50, 50);

    Text textWin("You win!", font);
    textWin.setCharacterSize(18.75);
    textWin.setFillColor(Color::Green);
    textWin.setPosition(50, 50);

    Text textScore("Your score is ", font);
    textScore.setCharacterSize(18.75);
    textScore.setFillColor(Color::Magenta);
    textScore.setPosition(textWin.getGlobalBounds().left + textWin.getGlobalBounds().width + 100, 50);

    Text textTime(std::to_string(time), font);
    textTime.setCharacterSize(18.75);
    textTime.setFillColor(Color::Black);
    textTime.setPosition(textScore.getGlobalBounds().left + textScore.getGlobalBounds().width + 300, 50);


    Clock timer;

    bool lose = false;
    bool Up = false;
    bool Down = false;
    bool Left = false;
    bool Right = false;

    int score = 0;

    while(!window.hasFocus())
    {
        timer.restart();
    }

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            if(event.type == Event::KeyPressed)
            {
                if (event.key.code == Keyboard::Left)
                {
                    Left = true;
                }

                if (event.key.code == Keyboard::Right)
                {
                    Right = true;
                }

                if (event.key.code == Keyboard::Up)
                {
                    Up = true;
                }

                if (event.key.code == Keyboard::Down)
                {
                    Down = true;
                }
            }

            if(event.type == Event::KeyReleased)
            {
                if (event.key.code == Keyboard::Left)
                {
                    Left = false;
                }

                if (event.key.code == Keyboard::Right)
                {
                    Right = false;
                }

                if (event.key.code == Keyboard::Up)
                {
                    Up = false;
                }

                if (event.key.code == Keyboard::Down)
                {
                    Down = false;
                }
            }
        }

        textScore.setPosition(player.getPosition().x  + 200 ,player.getPosition().y - 300);
        textTime.setPosition(player.getPosition().x - 300 ,player.getPosition().y - 300);
        textScore.setString("Your score is " + std::to_string(score));
        textTime.setString(std::to_string(time));


        for(int i = 0; i < enemies.size(); i++)
        {
            int xplayer = player.getPosition().x + player.getRadius();
            int yplayer = player.getPosition().y + player.getRadius();
            int xenemies = enemies[i].getPosition().x + enemies[i].getRadius();
            int yenemies = enemies[i].getPosition().y + enemies[i].getRadius();
            int xDistance = xplayer - xenemies;
            int yDistance = yplayer - yenemies;
            int Distance = xDistance * xDistance + yDistance * yDistance;
            if(std::sqrt(Distance) < player.getRadius() + enemies[i].getRadius() && player.getRadius() > enemies[i].getRadius())
            {
                oldRadius = player.getRadius();
                player.setRadius(oldRadius + enemies[i].getRadius() / 2);
                score = score + enemies[i].getRadius() / 5;
                enemies.erase(enemies.begin() + i);
                deadBalls = deadBalls + 1;

                myView.zoom((player.getRadius() - oldRadius) / player.getRadius() + 1);

                background.scale(1 + ((player.getRadius() - oldRadius) / player.getRadius()) * 1.05,
                                 1 + ((player.getRadius() - oldRadius) / player.getRadius()) * 1.05);

                textLose.setCharacterSize(player.getRadius() * 0.375);
                textWin.setCharacterSize(player.getRadius() * 0.375);
                textScore.setCharacterSize(player.getRadius() * 0.375);
                textTime.setCharacterSize(player.getRadius() * 0.375);
                textScore.setPosition(textWin.getGlobalBounds().left + textWin.getGlobalBounds().width + 100, 50);
                textTime.setPosition(textScore.getGlobalBounds().left + textScore.getGlobalBounds().width + 300, 50);
            }
        }


        for(int i = 0; i < enemies.size(); i++)
        {
            int xplayer = player.getPosition().x + player.getRadius();
            int yplayer = player.getPosition().y + player.getRadius();
            int xenemies = enemies[i].getPosition().x + enemies[i].getRadius();
            int yenemies = enemies[i].getPosition().y + enemies[i].getRadius();
            int xDistance = xplayer - xenemies;
            int yDistance = yplayer - yenemies;
            int Distance = xDistance * xDistance + yDistance * yDistance;
            if(std::sqrt(Distance) < player.getRadius() + enemies[i].getRadius() && player.getRadius() < enemies[i].getRadius())
            {
                player.setRadius(0);
                lose = true;
            }
        }


        for(int i = 0; i < enemies.size(); i++)
        {
            if(enemies[i].getRadius() < player.getRadius())
            {
                int xplayer = player.getPosition().x + player.getRadius();
                int yplayer = player.getPosition().y + player.getRadius();
                int xenemies = enemies[i].getPosition().x + enemies[i].getRadius();
                int yenemies = enemies[i].getPosition().y + enemies[i].getRadius();
                float xDistance = -1 * (xplayer - xenemies);
                float yDistance = -1 * (yplayer - yenemies);

                xDistance = ENEMIES_SPEED * xDistance / std::sqrt(xDistance * xDistance + yDistance * yDistance);
                yDistance = ENEMIES_SPEED * yDistance / std::sqrt(xDistance * xDistance + yDistance * yDistance);

                float xDistance2 = (900 - xenemies) / 630;
                float yDistance2 = (500 - yenemies) / 350;

                float xDist = xDistance + xDistance2;
                float yDist = yDistance + yDistance2;

                if(lose)
                {
                    xDist = 0;
                    yDist = 0;
                }

                enemies[i].move(xDist, yDist);
            }

            else
            {
                int xplayer = player.getPosition().x + player.getRadius();
                int yplayer = player.getPosition().y + player.getRadius();
                int xenemies = enemies[i].getPosition().x + enemies[i].getRadius();
                int yenemies = enemies[i].getPosition().y + enemies[i].getRadius();
                float xDistance = xplayer - xenemies;
                float yDistance = yplayer - yenemies;

                if(lose)
                {
                    ENEMIES_SPEED = 0;
                }

                xDistance = ENEMIES_SPEED * xDistance / std::sqrt(xDistance * xDistance + yDistance * yDistance);
                yDistance = ENEMIES_SPEED * yDistance / std::sqrt(xDistance * xDistance + yDistance * yDistance);

                enemies[i].move(xDistance, yDistance);
            }

            if(enemies[i].getPosition().x > 1800)
            {
                enemies[i].setPosition(0 - enemies[i].getRadius(), enemies[i].getPosition().y - enemies[i].getRadius());
            }
            else if(enemies[i].getPosition().x < 0)
            {
                enemies[i].setPosition(1800 - enemies[i].getRadius(), enemies[i].getPosition().y - enemies[i].getRadius());
            }

            if(enemies[i].getPosition().y > 1000)
            {
                enemies[i].setPosition(0 - enemies[i].getRadius(), enemies[i].getPosition().x - enemies[i].getRadius());
            }
            else if(enemies[i].getPosition().y < 0)
            {
                enemies[i].setPosition(1000 - enemies[i].getRadius(), enemies[i].getPosition().x - enemies[i].getRadius());
            }
        }

        if(lose)
        {
            Up = false;
            Down = false;
            Left = false;
            Right = false;
        }

        if(Up)
        {
            player.move(0, -2);
        }

        if(Down)
        {
            player.move(0, 2);
        }

        if(Left)
        {
            player.move(-2, 0);
        }

        if(Right)
        {
            player.move(2, 0);
        }
        background.setPosition(player.getPosition().x - myView.getSize().x / 2,player.getPosition().y - myView.getSize().y / 2);

        time = time - timer.getElapsedTime().asSeconds();
        timer.restart();

        if(time < 0)
        {
            lose = true;
        }

        myView.setCenter(player.getPosition().x + player.getRadius(), player.getPosition().y + player.getRadius());


        window.clear(Color::White);

        window.draw(background);

        window.draw(player);

        if(deadBalls == circlesValue)
        {
            if(!lose)
            {
                time = 100;
                window.draw(textWin);
                textScore.setFillColor(Color::Green);
            }
        }

        if(lose)
        {
            time = 0;
            window.draw(textLose);
            textScore.setFillColor(Color::Red);
        }

        for(int i = 0; i < enemies.size(); i ++)
        {
            window.draw(enemies[i]);
        }

        window.draw(textScore);

        window.draw(textTime);

        window.setView(myView);

        window.display();

    }
}
