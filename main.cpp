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
    RenderWindow window(sf::VideoMode(600, 600), "Labrith");

    //background
    sf::Texture texture;
    if (!texture.loadFromFile("grass.png")) {
        cout << "Could not load texture" <<endl;
        return 1;
    }
    texture.setRepeated(true);

    sf::Sprite background;
    background.setTexture(texture);
    background.setTextureRect(sf::IntRect(0,0,600,600));

    //bricks;



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            window.draw(background);
            window.display();
        }
    }

    return 0;
}
void create_shapes(vector<unique_ptr<sf::Drawable>>& shapes_vec) {

}
