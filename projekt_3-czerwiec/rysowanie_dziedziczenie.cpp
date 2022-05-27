#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<iostream>
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



#define SIZE 200
class textX: public sf :: Font, public sf :: Text{
    public:
       textX(): sf :: Font(), sf :: Text(){
           this->loadFromFile("arial.ttf");
           this->setFont(*this);
           this->setString("Xsa\nsd");
           this->setCharacterSize(SIZE);
           this->setLineSpacing(1);
           this->setLetterSpacing(0);
           this->setFillColor(sf::Color::Red);
       }
};


class testdrawble: public sf :: Drawable{
    sf::RectangleShape a;
    sf::RectangleShape b;
    public:
        testdrawble(){
             a.setSize(sf::Vector2f(800, 4));
            a.setOutlineColor(sf::Color::Red);
            a.setOutlineThickness(1);
            a.setPosition(10, 20);
            b.setSize(sf::Vector2f(800, 4));
            b.setOutlineColor(sf::Color::Red);
            b.setOutlineThickness(1);
            b.setPosition(10, 20);
            b.setRotation(90);
        };
         virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const{
           target.draw(a);
           target.draw(b);

         }

};

int main(){
    interface *a[3];
    a[0] = new A;
    a[1] = new B;
    //inter *c = new C;
    sf :: Text *X = new textX;
    sf :: Shape *cr[2];
    cr[0] = new C;
    cr[1] = new R;
    sf :: Mouse myszka;
    sf :: Vector2i xy;
    testdrawble rt;
    sf :: RenderWindow window(sf::VideoMode(800,800), "test myszki");
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
        // window.draw(*cr[0]);
        cr[1]->setRotation(90);
        cr[1]->setPosition(0,0);
        window.draw(*cr[1]);
        //X->move(0,0);
        X->setPosition(0,-0.29*SIZE);
        //window.draw(*X);
        xy = myszka.getPosition(window);
        window.draw(rt);
        window.display();
        std:: cout << "X: " << xy.x << '\n' << "Y: " << xy.y << '\n'; 
    }

}


