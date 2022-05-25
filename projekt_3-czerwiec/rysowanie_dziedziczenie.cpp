#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
class inter: public sf::CircleShape{
    public:
    inter(): sf::CircleShape() {};
};


class interface: public sf :: Texture, public sf :: Sprite {
    public:
        interface(): sf :: Texture(), sf :: Sprite() {};
       
};

class A: public interface{
    public:
    A(): interface() {
        this->loadFromFile("/home/kubus/Pulpit/sfml_testy/gameboard.png");
        this->setTexture(*this);
    };
   
};


class B: public interface{
    public:
    B(): interface() {
        this->loadFromFile("/home/kubus/Pulpit/sfml_testy/X.png");
        this->setTexture(*this);
    };
   
};

class C: public sf::CircleShape{
    public:
    C(): sf::CircleShape() {
        this->setRadius(15);
        this->setOutlineColor(sf::Color::Red);
        this->setOutlineThickness(1);
        this->setPosition(10, 20);
    };
   
};

class R: public sf::RectangleShape{
    public:
    R(): sf::RectangleShape() {
        this->setSize(sf::Vector2f(100, 2));
        this->setOutlineColor(sf::Color::Red);
        this->setOutlineThickness(1);
        this->setPosition(10, 20);
    };
   
};

int main(){
    interface *a[3];
    a[0] = new A;
    a[1] = new B;
    //inter *c = new C;

    sf :: Shape *cr[2];
    cr[0] = new C;
    cr[1] = new R;
    sf :: RenderWindow window(sf::VideoMode(1000,800), "test myszki");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
      
        window.clear();
        //window.draw(*a[0]);
        //window.draw(*a[1]);
        //window.draw(*c);
        window.draw(*cr[0]);
        window.draw(*cr[1]);

        window.display();
    }

}


