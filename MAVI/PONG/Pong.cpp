
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "PONG", sf::Style::Titlebar | sf::Style::Close);

    window.setFramerateLimit(60);
    //Limites de Zona Jugable
    sf::RectangleShape rup(sf::Vector2f(1720.f, 20.f));
    rup.setFillColor(sf::Color::Black);
    rup.setPosition(100.f, 200.f);

    sf::RectangleShape rdo(sf::Vector2f(1720.f, 20.f));
    rdo.setFillColor(sf::Color::Black);
    rdo.setPosition(100.f, window.getSize().y - 100.f);

    sf::RectangleShape rle(sf::Vector2f(20.f, 800.f));
    rle.setFillColor(sf::Color::Black);
    rle.setPosition(80.f, 200.f);

    sf::RectangleShape rri(sf::Vector2f(20.f, 800.f));
    rri.setFillColor(sf::Color::Black);
    rri.setPosition(1820.f, 200.f);

    sf::Font font;
    if (!font.loadFromFile("./Fonts/nasalization-rg.otf")) {
    }

    //MenuTitulo
    sf::RectangleShape ver(sf::Vector2f(1.f, 1080.f));
    ver.setFillColor(sf::Color::Red);
    ver.setPosition(960.f, 0.f);

    sf::RectangleShape hor(sf::Vector2f(1920.f, 1.f));
    hor.setFillColor(sf::Color::Red);
    hor.setPosition(0.f, 540.f);

    sf::ConvexShape triangle;
    triangle.setPointCount(3);
    triangle.setPoint(0, sf::Vector2f(0, 0));
    triangle.setPoint(1, sf::Vector2f(0, 30));
    triangle.setPoint(2, sf::Vector2f(30, 15));
    triangle.setFillColor(sf::Color::Black);

    sf::Text menuTitle;
    menuTitle.setFont(font);
    menuTitle.setCharacterSize(150);
    menuTitle.setFillColor(sf::Color::Black);
    menuTitle.setPosition(690.f, 360.f);

    sf::Text win;
    win.setFont(font);
    win.setCharacterSize(150);
    win.setFillColor(sf::Color::Black);
    win.setPosition(720.f, 350.f);

    sf::Text oneplayer;
    oneplayer.setFont(font);
    oneplayer.setCharacterSize(40);
    oneplayer.setFillColor(sf::Color::Black);
    oneplayer.setPosition(880.f, 540.f);

    sf::Text dif;
    dif.setFont(font);
    dif.setCharacterSize(40);
    dif.setFillColor(sf::Color::Black);
    dif.setPosition(880.f, 740.f);

    sf::Text twoplayer;
    twoplayer.setFont(font);
    twoplayer.setCharacterSize(40);
    twoplayer.setFillColor(sf::Color::Black);
    twoplayer.setPosition(860.f, 590.f);

    //Titulo
    sf::Text mainTitle;
    mainTitle.setFont(font);
    mainTitle.setCharacterSize(50);
    mainTitle.setFillColor(sf::Color::Black);
    mainTitle.setPosition(700.f, 5.f);
    //Puntos
    sf::Text scorePlayer1;
    scorePlayer1.setFont(font);
    scorePlayer1.setCharacterSize(30);
    scorePlayer1.setFillColor(sf::Color::Black);
    scorePlayer1.setPosition(100.f, 160.f); // Posición para el puntaje del jugador 1

    sf::Text scorePlayer2;
    scorePlayer2.setFont(font);
    scorePlayer2.setCharacterSize(30);
    scorePlayer2.setFillColor(sf::Color::Black);
    scorePlayer2.setPosition(window.getSize().x - 310.f, 160.f); // Posición para el puntaje del jugador 2

    //Jugadores
    sf::RectangleShape rectanglep1(sf::Vector2f(20.f, 99.f));
    rectanglep1.setFillColor(sf::Color::Black);
    rectanglep1.setPosition(130.f, 220.f);

    sf::RectangleShape rectanglep2(sf::Vector2f(20.f, 99.f));
    rectanglep2.setFillColor(sf::Color::Black);
    rectanglep2.setPosition(window.getSize().x - rectanglep2.getSize().x - 130.f, window.getSize().y - rectanglep2.getSize().y - 100.f);

    //Pelota
    sf::CircleShape pongball(10.f);
    pongball.setFillColor(sf::Color::Black);
    pongball.setPosition(window.getSize().x / 2, window.getSize().y / 2);

    //Power Up
    sf::CircleShape power1(20.f);
    power1.setFillColor(sf::Color::Black);
    sf::CircleShape pow1(5.f);
    pow1.setFillColor(sf::Color::Black);
    pow1.setPosition(-900.f, rand() % 600 + 300.f);
    sf::CircleShape pow2(5.f);
    pow2.setFillColor(sf::Color::Black);
    pow2.setPosition(window.getSize().x - rectanglep2.getSize().x + 1300.f, rand() % 600 + 300.f);

    //Sonidos
     sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("./Audio/onePlayer.ogg")) {
      cout << "ERROR";
    }
    sf::Sound onePlayer;
    onePlayer.setBuffer(buffer);

    sf::SoundBuffer buffer2;
    if (!buffer2.loadFromFile("./Audio/twoPlayers.ogg")) {
        cout << "ERROR";
    }
    sf::Sound twoPlayer;
    twoPlayer.setBuffer(buffer2);

    sf::SoundBuffer buffer3;
    if (!buffer3.loadFromFile("./Audio/selectDiff.ogg")) {
        cout << "ERROR";
    }
    sf::Sound selectDiff;
    selectDiff.setBuffer(buffer3);

    sf::SoundBuffer buffer4;
    if (!buffer4.loadFromFile("./Audio/easy.ogg")) {
        cout << "ERROR";
    }
    sf::Sound easy;
    easy.setBuffer(buffer4);

    sf::SoundBuffer buffer5;
    if (!buffer5.loadFromFile("./Audio/normal.ogg")) {
        cout << "ERROR";
    }
    sf::Sound normal;
    normal.setBuffer(buffer5);

    sf::SoundBuffer buffer6;
    if (!buffer6.loadFromFile("./Audio/hard.ogg")) {
        cout << "ERROR";
    }
    sf::Sound hard;
    hard.setBuffer(buffer6);

    sf::SoundBuffer buffer7;
    if (!buffer7.loadFromFile("./Audio/p1wins.ogg")) {
        cout << "ERROR";
    }
    sf::Sound p1wins;
    p1wins.setBuffer(buffer7);

    sf::SoundBuffer buffer8;
    if (!buffer8.loadFromFile("./Audio/p2wins.ogg")) {
        cout << "ERROR";
    }
    sf::Sound p2wins;
    p2wins.setBuffer(buffer8);

    sf::SoundBuffer buffer9;
    if (!buffer9.loadFromFile("./Audio/youLose.ogg")) {
        cout << "ERROR";
    }
    sf::Sound youLose;
    youLose.setBuffer(buffer9);

    sf::SoundBuffer buffer10;
    if (!buffer10.loadFromFile("./Audio/powerUp.ogg")) {
        cout << "ERROR";
    }
    sf::Sound powerUp;
    powerUp.setBuffer(buffer10);

    sf::SoundBuffer buffer11;
    if (!buffer11.loadFromFile("./Audio/goal.ogg")) {
        cout << "ERROR";
    }
    sf::Sound goal;
    goal.setBuffer(buffer11);


    sf::SoundBuffer colBuffer[8];
    if (!colBuffer[0].loadFromFile("./Audio/c1.ogg")) {
        cout << "ERROR";
    }    if (!colBuffer[1].loadFromFile("./Audio/c2.ogg")) {
        cout << "ERROR";
    }    if (!colBuffer[2].loadFromFile("./Audio/c3.ogg")) {
        cout << "ERROR";
    }    if (!colBuffer[3].loadFromFile("./Audio/c4.ogg")) {
        cout << "ERROR";
    }    if (!colBuffer[4].loadFromFile("./Audio/c5.ogg")) {
        cout << "ERROR";
    }    if (!colBuffer[5].loadFromFile("./Audio/c6.ogg")) {
        cout << "ERROR";
    }    if (!colBuffer[6].loadFromFile("./Audio/c7.ogg")) {
        cout << "ERROR";
    }    if (!colBuffer[7].loadFromFile("./Audio/c8.ogg")) {
        cout << "ERROR";
    }
    
    sf::Sound col[8];
    for (int i = 0; i < 8; i++) {
        col[i].setBuffer(colBuffer[i]);
    }

    sf::SoundBuffer proceduralBuf[8];
    if (!proceduralBuf[0].loadFromFile("./Audio/a.ogg")) {
        cout << "ERROR";
    }    if (!proceduralBuf[1].loadFromFile("./Audio/b.ogg")) {
        cout << "ERROR";
    }    if (!proceduralBuf[2].loadFromFile("./Audio/c.ogg")) {
        cout << "ERROR";
    }    if (!proceduralBuf[3].loadFromFile("./Audio/d.ogg")) {
        cout << "ERROR";
    }    if (!proceduralBuf[4].loadFromFile("./Audio/e.ogg")) {
        cout << "ERROR";
    }    if (!proceduralBuf[5].loadFromFile("./Audio/f.ogg")) {
        cout << "ERROR";
    }    if (!proceduralBuf[6].loadFromFile("./Audio/g.ogg")) {
        cout << "ERROR";
    }    if (!proceduralBuf[7].loadFromFile("./Audio/gs.ogg")) {
        cout << "ERROR";
    }

    sf::Sound procedural[8];
    for (int i = 0; i < 8; i++) {
        procedural[i].setBuffer(proceduralBuf[i]);
    }

    float ballSpeedX = 500.f;
    float ballSpeedY = 500.f;
    float initialBallSpeedX = 500.f;
    float initialBallSpeedY = 500.f;
    float pSpeed = 600.f;
    float pcSpeed = 600.f;
    int p1score = 0;
    int p2score = 0;
    bool powerUpisActive = false;
    bool pow1isOn = false;
    bool pow2isOn = false;
    int colisiones = 0;
    sf::Clock clock;
    sf::Clock clockp1;
    sf::Clock clockp2;
    sf::Time intervalpow1on = sf::seconds(10.0f);
    sf::Time intervalpow1off = sf::seconds(13.0f);
    sf::Time elapsed;
    sf::Time elapsed2;
    sf::Clock colorChangeClock;
    sf::Clock keyClock;
    sf::Time colorChangeDuration = sf::seconds(0.1f);
    sf::Time keylapse = sf::seconds(0.2f);
    sf::Clock mTime;
    sf::Time mTimeinterval = sf::seconds(5.f);
    float powsite[2] = { window.getSize().y - 130.f, 240.f };
    float selectorX[2] = { 840.f, 820.f };
    float selectorY[2] = { 550.f, 600.f };
    triangle.setPosition(selectorX[0], selectorY[0]);
    string sdiff[3] = { "  Easy", "Normal", "  Hard" };
    int distancediff[3] = { 960, 530, 0 };
    bool ismenu = true;
    bool isgame = false;
    bool isgameover = false;
    bool pvp = true;
    bool pvpc = false;
    bool selectdif = false;
    bool enterPressed = false;
    int n = 0;

    //Bucle principal del juego
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        float deltaTime = clock.restart().asSeconds();

        if (ismenu) {
            menuTitle.setString("PONG!");
            oneplayer.setString("1 Player");
            twoplayer.setString("2 Players");

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                triangle.setPosition(selectorX[1], selectorY[1]);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                triangle.setPosition(selectorX[0], selectorY[0]);

            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && triangle.getPosition().y == selectorY[0]) {
                pvpc = true;
                pvp = false;
                ismenu = false;
                selectdif = true;
                selectDiff.play();
                keyClock.restart();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && triangle.getPosition().y == selectorY[1]) {
                ismenu = false;
                isgame = true;
                twoPlayer.play();
                keyClock.restart();
                int mran = rand() % 8;
                procedural[mran].play();
                mTime.restart();
            }
        }
        if (selectdif) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && n < 2 && keyClock.getElapsedTime() >= keylapse) {
                n++;
                keyClock.restart();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && n > 0 && keyClock.getElapsedTime() >= keylapse) {
                n--;
                keyClock.restart();
            }
            dif.setString(sdiff[n]);
       
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && keyClock.getElapsedTime() >= keylapse) {
                selectdif = false;
                ismenu = false;
                isgame = true;
                if (n == 0) {
                    easy.play();
                }
                else if (n == 1) {
                    normal.play();
                }
                else if (n == 2) {
                    hard.play();
                }
                int mran = rand() % 8;
                procedural[mran].setVolume(55);
                procedural[mran].play();
                mTime.restart();
            }
        }
        if (isgame) {
            //Partes del rectangulo1, calculo
            float sectionY = rectanglep1.getSize().y / 3;
            float part1 = rectanglep1.getPosition().y + sectionY;
            float part2 = rectanglep1.getPosition().y + sectionY * 2;

            //Partes del rectangulo2, calculo
            float sectionY2 = rectanglep2.getSize().y / 3;
            float part12 = rectanglep2.getPosition().y + sectionY;
            float part22 = rectanglep2.getPosition().y + sectionY * 2;


            //Moviemiento jugador
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                if (rectanglep1.getPosition().y > 220) {
                    rectanglep1.move(0.f, -pSpeed * deltaTime);
                }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                if (rectanglep1.getPosition().y + rectanglep1.getSize().y < window.getSize().y - 100.f) {
                    rectanglep1.move(0.f, pSpeed * deltaTime);
                }
            }
            if (pvpc) {
                if (pongball.getPosition().y < (rectanglep2.getPosition().y + rectanglep2.getSize().y) && rectanglep2.getPosition().y > 220 && pongball.getPosition().x > distancediff[n]) {
                    rectanglep2.move(0.f, -pcSpeed * deltaTime);
                }
                if (pongball.getPosition().y > rectanglep2.getPosition().y + rectanglep2.getSize().y && rectanglep2.getPosition().y + rectanglep2.getSize().y < window.getSize().y - 100.f && pongball.getPosition().x > distancediff[n]) {
                    rectanglep2.move(0.f, pcSpeed * deltaTime);
                }

            }
            if (pvp) {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                    if (rectanglep2.getPosition().y > 220) {
                        rectanglep2.move(0.f, -pSpeed * deltaTime);
                    }
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                    if (rectanglep2.getPosition().y + rectanglep2.getSize().y < window.getSize().y - 100.f) {
                        rectanglep2.move(0.f, pSpeed * deltaTime);
                    }
                }
            }
            //Movimiento de pelota
            pongball.move(ballSpeedX * deltaTime, ballSpeedY * deltaTime);

            //Colisiones con jugadores
            //if (pongball.getGlobalBounds().intersects(rectanglep1.getGlobalBounds())) {
                if (pongball.getPosition().x < (rectanglep1.getPosition().x + rectanglep1.getSize().x) && pongball.getPosition().y > rectanglep1.getPosition().y && pongball.getPosition().y < rectanglep1.getPosition().y + rectanglep1.getSize().y) {
                if (pongball.getPosition().y + pongball.getRadius() > part1) {
                    ballSpeedX = -ballSpeedX;
                    ballSpeedX += 200.f;ballSpeedY = rand() % 500 + 150.f;
                    colisiones++;
                    if (colisiones < 8) {
                        col[colisiones - 1].play();
                    }
                    else {
                        col[7].play();
                    }
                    cout << colisiones;
                }
                else if (pongball.getPosition().y + pongball.getRadius() > part1 && pongball.getPosition().y + pongball.getRadius() < part2) {
                    ballSpeedX = -ballSpeedX;
                    ballSpeedX += 200.f;
                    colisiones++;
                    if (colisiones < 8) {
                        col[colisiones - 1].play();
                    }
                    else {
                        col[7].play();
                    }
                    cout << colisiones;
                }
                else {// (pongball.getPosition().y + pongball.getRadius() < part2) {
                    ballSpeedX = -ballSpeedX;
                    ballSpeedX += 200.f;ballSpeedY = -(rand() % 500 + 150.f);
                    colisiones++;
                    if (colisiones < 8) {
                        col[colisiones - 1].play();
                    }
                    else {
                        col[7].play();
                    }
                    cout << colisiones;
                }
                colorChangeClock.restart();
                rectanglep1.setFillColor(sf::Color(0, 0, 0, 150));
            }
            if (colorChangeClock.getElapsedTime() >= colorChangeDuration) {
                rectanglep1.setFillColor(sf::Color::Black);
            }
            if (pongball.getGlobalBounds().intersects(rectanglep2.getGlobalBounds())) {
                if (pongball.getPosition().y + pongball.getRadius() > part12) {
                    ballSpeedX = -ballSpeedX;
                    ballSpeedX -= 200.f;ballSpeedY = rand() % 500 + 150.f;
                    colisiones++;
                    if (colisiones < 8) {
                        col[colisiones - 1].play();
                    }
                    else {
                        col[7].play();
                    }
                    cout << colisiones;
                }
                else if (pongball.getPosition().y + pongball.getRadius() > part12 && pongball.getPosition().y + pongball.getRadius() < part22) {
                    ballSpeedX = -ballSpeedX;
                    ballSpeedX -= 200.f;
                    colisiones++;
                    if (colisiones < 8) {
                        col[colisiones - 1].play();
                    }
                    else {
                        col[7].play();
                    }
                    cout << colisiones;
                }
                else {//if (pongball.getPosition().y + pongball.getRadius() < part22) {
                    ballSpeedX = -ballSpeedX;
                    ballSpeedX -= 200.f;ballSpeedY = -(rand() % 500 + 150.f);
                    colisiones++;
                    if (colisiones < 8) {
                        col[colisiones - 1].play();
                    }
                    else {
                        col[7].play();
                    }
                    cout << colisiones;
                }
                colorChangeClock.restart();
                rectanglep2.setFillColor(sf::Color(0, 0, 0, 150));
            }
            if (colorChangeClock.getElapsedTime() >= colorChangeDuration) {
                rectanglep2.setFillColor(sf::Color::Black);
            }
            if (colisiones == 10) {
                pongball.setFillColor(sf::Color(150, 0, 0, 150));
            }
            if (colisiones == 0) {
                pongball.setFillColor(sf::Color::Black);
            }


            //Colision vertical cancha
            if (pongball.getPosition().y <= 220 || pongball.getPosition().y >= window.getSize().y - 100 - pongball.getRadius() * 2) {
                ballSpeedY = -ballSpeedY;
            }
            //Colision de puntaje
            if (pongball.getPosition().x <= 120) {
                p2score++;
                pongball.setPosition(window.getSize().x / 2, window.getSize().y / 2);
                int randomDirection = rand() % 2;
                ballSpeedX = (randomDirection == 0) ? -initialBallSpeedX : initialBallSpeedX;
                ballSpeedY = initialBallSpeedY;
                goal.play();
                colisiones = 0;
            }
            else if (pongball.getPosition().x >= window.getSize().x - 100 - pongball.getRadius() * 2) {
                p1score++;
                pongball.setPosition(window.getSize().x / 2, window.getSize().y / 2);
                int randomDirection = rand() % 2;
                ballSpeedX = (randomDirection == 0) ? -initialBallSpeedX : initialBallSpeedX;
                ballSpeedY = initialBallSpeedY;
                goal.play();
                colisiones = 0;
            }
            //Power Ups
            //Cambia Y
            if (colisiones > 5 && !powerUpisActive) {
                power1.setPosition(rand() % 1520 + 200, rand() % 600 + 300);
                powerUpisActive = true;
                cout << " PowerUP" << endl;
            }
            if (pongball.getGlobalBounds().intersects(power1.getGlobalBounds())) {
                cout << "Yes!";
                power1.setPosition(-900.f, 600.f);
                ballSpeedY = -ballSpeedY;
                ballSpeedX = ballSpeedX * 1, 2;
                powerUpisActive = false;
             
            }
            //Agranda
            elapsed = clockp1.getElapsedTime();
            if (elapsed >= intervalpow1on && !pow1isOn) {
                cout << "cuad";
                pow1.setPosition(130.f, powsite[rand() % 2]);
                pow1isOn = true;
            }
            if (elapsed >= intervalpow1off) {
                pow1isOn = false;
                pow1.setPosition(-900.f, rand() % 600 + 300.f);
                clockp1.restart();
            }
            if (rectanglep1.getGlobalBounds().intersects(pow1.getGlobalBounds())) {
                pow1isOn = false;
                pow1.setPosition(-900.f, rand() % 600 + 300.f);
                clockp1.restart();
                powerUp.play();
                rectanglep1.setSize(sf::Vector2f(rectanglep1.getSize().x, rectanglep1.getSize().y + 20.f));
            }
            elapsed2 = clockp2.getElapsedTime();
            if (elapsed2 >= intervalpow1on && !pow2isOn) {
                cout << "cuad";
                pow2.setPosition(window.getSize().x - rectanglep2.getSize().x - 130.f, powsite[rand() % 2]);
                pow2isOn = true;
            }
            if (elapsed2 >= intervalpow1off) {
                pow2isOn = false;
                pow2.setPosition(window.getSize().x - rectanglep2.getSize().x + 1300.f, rand() % 600 + 300.f);
                clockp2.restart();
            }
            if (rectanglep2.getGlobalBounds().intersects(pow2.getGlobalBounds())) {
                pow2isOn = false;
                pow2.setPosition(window.getSize().x - rectanglep2.getSize().x + 1300.f, rand() % 600 + 300.f);
                clockp2.restart();
                powerUp.play();
                rectanglep2.setSize(sf::Vector2f(rectanglep2.getSize().x, rectanglep2.getSize().y + 20.f));
            }
            //Titulo
            mainTitle.setString("B&W SERIES - PONG");

            //Actualizo Puntaje
            scorePlayer1.setString("Jugador 1: " + std::to_string(p1score));
            scorePlayer2.setString("Jugador 2: " + std::to_string(p2score));

            if (p1score == 10) {
                isgameover = true;
                isgame = false;
                p1wins.play();
            }
            if (p2score == 10 && pvp) {
                isgameover = true;
                isgame = false;
                p2wins.play();
            } if (p2score == 10 && pvpc) {
                isgameover = true;
                isgame = false;
                youLose.play();
            }

            if (mTime.getElapsedTime() > mTimeinterval) {
                int mran = rand() % 8;
                procedural[mran].setVolume(55);
                procedural[mran].play();
                mTime.restart();
            }

        }

        if (isgameover) {
            if (p1score == 10) {
                win.setString("Player 1 Wins!");
                win.setPosition(450.f, 420.f);
            }
            if (p2score == 10) {
                win.setString("Player 2 Wins!");
                win.setPosition(450.f, 420.f);
            }
        }

        window.clear(sf::Color::White);

        //window.draw(hor); //lineasguias
        //window.draw(ver);
        if (ismenu || selectdif) {
            window.draw(menuTitle);
            window.draw(oneplayer);
            window.draw(twoplayer);
            window.draw(triangle);
            if (selectdif) {
                window.draw(dif);
            }
        }

        if (isgame) {
            window.draw(pow1);
            window.draw(pow2);

            if (powerUpisActive) {
                window.draw(power1);
            }
            window.draw(mainTitle);
            window.draw(rup);
            window.draw(rdo);
            window.draw(rle);
            window.draw(rri);
            window.draw(rectanglep1);
            window.draw(rectanglep2);
            window.draw(scorePlayer1);
            window.draw(scorePlayer2);
            window.draw(pongball);
        }

        if (isgameover) {
            window.draw(win);
        }
        window.display();

    }

    return 0;
}