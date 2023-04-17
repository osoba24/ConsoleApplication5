// ConsoleApplication5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include<iostream>
#include <Font.Dlg>


/// PRZECHWYTYWANIE WYDARZEŃ (klawiatura, myszka)
using namespace std;
using namespace sf;

int main()
{

  


    RenderWindow okno(VideoMode(1280, 720), "Okno");
    okno.setFramerateLimit(70);
    okno.setActive(true);
    okno.setKeyRepeatEnabled(false);
    okno.setVerticalSyncEnabled(true);
    okno.setPosition(Vector2i(1, 650));

    ///DO
    SoundBuffer bufor;
    bufor.loadFromFile("316898__jaz_the_man_2__do.wav");
    Sound DO1;
    DO1.setBuffer(bufor);
    DO1.setVolume(150);



    //RE
    SoundBuffer bufor1;
    bufor1.loadFromFile("316909__jaz_the_man_2__re-stretched.wav");
    Sound RE;
    RE.setBuffer(bufor1);
    RE.setVolume(150);



    //MI
    SoundBuffer bufor2;
    bufor2.loadFromFile("316906__jaz_the_man_2__mi.wav");
    Sound MI;
    MI.setBuffer(bufor2);
    MI.setVolume(150);


    //FA NOTE
    SoundBuffer bufor3;
    bufor3.loadFromFile("392397__themineway__fa.wav");
    Sound FA;
    FA.setBuffer(bufor3);
    FA.setVolume(150);


    //SOL

    SoundBuffer bufor4;
    bufor4.loadFromFile("316911__jaz_the_man_2__sol-stretched.wav");
    Sound SOL;
    SOL.setBuffer(bufor4);
    SOL.setVolume(150);


    //LA
    SoundBuffer bufor5;
    bufor5.loadFromFile("316903__jaz_the_man_2__la-stretched.wav");
    Sound LA;
    LA.setBuffer(bufor5);
    LA.setVolume(150);



    //SI
    SoundBuffer bufor6;
    bufor6.loadFromFile("392401__themineway__si.wav");
    Sound SI;
    SI.setBuffer(bufor6);
    SI.setVolume(70);


    //DO OCTAVE
    SoundBuffer bufor7;
    bufor7.loadFromFile("316900__jaz_the_man_2__do-stretched-octave.wav");
    Sound DO2;
    DO2.setBuffer(bufor7);
    DO2.setVolume(150);




   

    RectangleShape bd(Vector2f(1280.0f, 720.0f));


    Vector2f camilap(640, 360);

    RectangleShape camila(Vector2f(150.0f, 150.0f));
    camila.setPosition(camilap);
    sf::Texture texture;
    texture.loadFromFile("turtle2.0.png");
    camila.setTexture(&texture);


    Event event;
    while (okno.isOpen())
    {
        while (okno.pollEvent(event))
        {





            if (Keyboard::isKeyPressed(Keyboard::Escape))  okno.close();



        }


        if (Keyboard::isKeyPressed(Keyboard::Key::Num1))
        {
            DO1.play();
            bd.setFillColor(Color::Cyan);

        }


        if (Keyboard::isKeyPressed(Keyboard::Key::Num2))
        {
            RE.play();
            bd.setFillColor(Color::Red);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Num3))
        {
            MI.play();
            bd.setFillColor(Color::Yellow);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Num4))
        {
            FA.play();
            bd.setFillColor(Color::Magenta);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Num5))
        {
            SOL.play();
            bd.setFillColor(Color::Blue);


        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Num6))
        {
            LA.play();
            bd.setFillColor(Color::Green);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Num7))
        {
            SI.play();
            bd.setFillColor(Color::White);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Num8))
        {
            DO2.play();
            bd.setFillColor(Color::Black);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Left))
        {
            camilap.x -= 4.0;
            camila.move(-4.0f, 0.0f);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Right))
        {
            camilap.x += 4.0;
            camila.move(4.0f, 0.0f);

        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Down))
        {

            camila.move(0.0f, 4.0f);
        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Up))
        {

            camila.move(0.0f, -4.0f);
        }




        /*  if (camilap.x < 0 || camilap.x>1180)
          {
              camilap.x *= 0;
              camila.setPosition(camilap);
          }
          if (camilap.y < 0 || camilap.y > 620)
          {
              camilap.y *= 0;
              camila.setPosition(camilap);
          }
          */

        okno.clear(Color(0, 0, 0));
        okno.draw(bd);
        okno.draw(camila);

        okno.display();



    }




    return 0;
}
