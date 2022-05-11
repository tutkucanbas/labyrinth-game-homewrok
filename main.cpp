/*
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <iostream>
using namespace sf;
using namespace std;

void create_shapes(vector<unique_ptr<sf::Drawable>>& shapes_vec);
int main()
{
    vector <unique_ptr<sf::Drawable>> shapes;
    RenderWindow window(sf::VideoMode(800, 700), "Labrith");

    //background
    sf::Texture texture;
    if (!texture.loadFromFile("grass.png")) {
        cout << "Could not load texture" <<endl;
        return 1;
    }
    texture.setRepeated(true);

    sf::Sprite background;
    background.setTexture(texture);
    background.setTextureRect(sf::IntRect(0,0,800,700));

    //bricks;
    sf::Texture bricks;
    if (!bricks.loadFromFile("wall.png")) {
        cout << "Could not load the Wall image " << endl;
        return 1;
    }
    sf::Sprite wall[30];
    for (int i = 0; i < 30; i++) {
        wall[i].setTexture(bricks);
        wall[i].setTextureRect(sf::IntRect(0, 0, 50, 50));
    }
    int x = 30, y = 100;
    for (int i = 0; i < 8; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 200, y = 200;
    for (int i = 8; i < 14; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 250, y = 100;
    for (int i = 14; i < 18; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    x = 250, y = 100;
    for (int i = 14; i < 18; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    x = 550, y = 100;
    for (int i = 18; i < 27; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 600, y = 450;
    for (int i = 27; i < 29; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    /////



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            window.draw(background);
            for(int i=0;i<29;i++)
            window.draw(wall[i]);
            window.display();
        }
    }

    return 0;
}
void create_shapes(vector<unique_ptr<sf::Drawable>>& shapes_vec) {

}
*/


//Add a character that you can move with the cursor keys.
/*
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <iostream>
using namespace sf;
using namespace std;

void create_shapes(vector<unique_ptr<sf::Drawable>>& shapes_vec);
int main()
{
    vector <unique_ptr<sf::Drawable>> shapes;
    RenderWindow window(sf::VideoMode(800, 700), "Labrith");

    //background
    sf::Texture texture;
    if (!texture.loadFromFile("grass.png")) {
        cout << "Could not load texture" <<endl;
        return 1;
    }
    texture.setRepeated(true);

    sf::Sprite background;
    background.setTexture(texture);
    background.setTextureRect(sf::IntRect(0,0,800,700));

    //bricks;
    sf::Texture bricks;
    if (!bricks.loadFromFile("wall.png")) {
        cout << "Could not load the Wall image " << endl;
        return 1;
    }
    sf::Sprite wall[30];
    for (int i = 0; i < 29; i++) {
        wall[i].setTexture(bricks);
        wall[i].setTextureRect(sf::IntRect(0, 0, 50, 50));
    }
    int x = 30, y = 100;
    for (int i = 0; i < 8; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 200, y = 200;
    for (int i = 8; i < 14; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 250, y = 100;
    for (int i = 14; i < 18; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    x = 250, y = 100;
    for (int i = 14; i < 18; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    x = 550, y = 100;
    for (int i = 18; i < 27; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 600, y = 450;
    for (int i = 27; i < 29; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    /////guy!
    sf::Texture guyload;
    if (!guyload.loadFromFile("guy.png")) {
        cout << "Could not load the guy" << endl;
    }

    sf::Sprite guy;
    guy.setTexture(guyload);
    int xaxis = 100,yaxis = 100;
    guy.setPosition(sf::Vector2f(xaxis, yaxis));
    ////////////
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            //movement

            if (Keyboard::isKeyPressed(Keyboard::Up)) {
                guy.move(0.f, -5.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Down)) {
                guy.move(0.f, 5.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Left)) {
                guy.move(-5.f, 0.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Right)) {
                guy.move(5.f, 0.f);
            }
            ///

            window.draw(background);
            for(int i=0;i<29;i++)
            window.draw(wall[i]);

            window.draw(guy);
            window.display();
        }
    }

    return 0;
}
void create_shapes(vector<unique_ptr<sf::Drawable>>& shapes_vec) {

}
*/
//Add collision detection so that it is impossible to pass through walls.
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <iostream>
using namespace sf;
using namespace std;

void create_shapes(vector<unique_ptr<sf::Drawable>>& shapes_vec);
int main()
{
    vector <unique_ptr<sf::Drawable>> shapes;
    RenderWindow window(sf::VideoMode(800, 700), "Labrith");

    //background
    sf::Texture texture;
    if (!texture.loadFromFile("grass.png")) {
        cout << "Could not load texture" <<endl;
        return 1;
    }
    texture.setRepeated(true);

    sf::Sprite background;
    background.setTexture(texture);
    background.setTextureRect(sf::IntRect(0,0,800,700));

    //bricks;
    sf::Texture bricks;
    if (!bricks.loadFromFile("wall.png")) {
        cout << "Could not load the Wall image " << endl;
        return 1;
    }
    sf::Sprite wall[30];
    for (int i = 0; i < 29; i++) {
        wall[i].setTexture(bricks);
        wall[i].setTextureRect(sf::IntRect(0, 0, 50, 50));
    }
    int x = 30, y = 100;
    for (int i = 0; i < 8; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 200, y = 200;
    for (int i = 8; i < 14; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 250, y = 100;
    for (int i = 14; i < 18; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    x = 250, y = 100;
    for (int i = 14; i < 18; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    x = 550, y = 100;
    for (int i = 18; i < 27; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        y = y + 50;
    }
    x = 600, y = 450;
    for (int i = 27; i < 29; i++) {
        wall[i].setPosition(sf::Vector2f(x, y));
        x = x + 50;
    }
    /////guy!
    sf::Texture guyload;
    if (!guyload.loadFromFile("guy.png")) {
        cout << "Could not load the guy" << endl;
    }

    sf::Sprite guy;
    guy.setTexture(guyload);
    int xaxis = 100,yaxis = 100;
    guy.setPosition(sf::Vector2f(xaxis, yaxis));
    ////////////
    int c, b;
    FloatRect collision,newpos;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            //movement

            if (Keyboard::isKeyPressed(Keyboard::Up)&&guy.getPosition().y>0) {
                guy.move(0.f, -5.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Down)&&guy.getPosition().y<630) {
                guy.move(0.f, 5.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Left) && guy.getPosition().x>0) {
                guy.move(-5.f, 0.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Right) && guy.getPosition().x<760) {
                guy.move(5.f, 0.f);
            }
            //collision
            for (auto& a : wall) {
                FloatRect GuyBounds = guy.getGlobalBounds();
                FloatRect wallBounds = a.getGlobalBounds();
                if (wallBounds.intersects(GuyBounds)) {
                    guy.setPosition(100, 100);
                }
            }
            window.draw(background);
            for(int i=0;i<29;i++)
            window.draw(wall[i]);

            window.draw(guy);
            window.display();
        }
    }

    return 0;
}
void create_shapes(vector<unique_ptr<sf::Drawable>>& shapes_vec) {

}
