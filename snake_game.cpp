#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <vector>

const int windowWidth = 800;
const int windowHeight = 600;
const int gridSize = 20;
const int gridWidth = windowWidth / gridSize;
const int gridHeight = windowHeight / gridSize;

struct SnakeSegment {
    int x, y;
    SnakeSegment(int x, int y) : x(x), y(y) {}
};

using Snake = std::vector<SnakeSegment>;

enum class Direction { None, Up, Down, Left, Right };

class SnakeGame {
public:
    SnakeGame() : fruit(0, 0) {
        window.create(sf::VideoMode(windowWidth, windowHeight), "Snake Game");
        window.setFramerateLimit(10);
        direction = Direction::None;
        reset();
    }

    void run() {
        while (window.isOpen()) {
            handleInput();
            if (!gameOver) {
                update();
            }
            render();
        }
    }

private:
    sf::RenderWindow window;
    Snake snake;
    SnakeSegment fruit;
    Direction direction;
    bool gameOver;

    void reset() {
        snake.clear();
        snake.push_back(SnakeSegment(gridWidth / 2, gridHeight / 2));
        spawnFruit();
        direction = Direction::None;
        gameOver = false;
    }

    void spawnFruit() {
        fruit.x = rand() % gridWidth;
        fruit.y = rand() % gridHeight;
    }

    void handleInput() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::Up: if (direction != Direction::Down) direction = Direction::Up; break;
                    case sf::Keyboard::Down: if (direction != Direction::Up) direction = Direction::Down; break;
                    case sf::Keyboard::Left: if (direction != Direction::Right) direction = Direction::Left; break;
                    case sf::Keyboard::Right: if (direction != Direction::Left) direction = Direction::Right; break;
                    case sf::Keyboard::R: reset(); break;
                    case sf::Keyboard::Escape: window.close(); break;
                }
            }
        }
    }

    void update() {
        if (direction == Direction::None) return;

        SnakeSegment newHead = snake.front();
        switch (direction) {
            case Direction::Up: newHead.y--; break;
            case Direction::Down: newHead.y++; break;
            case Direction::Left: newHead.x--; break;
            case Direction::Right: newHead.x++; break;
            default: break;
        }

        if (newHead.x < 0 || newHead.x >= gridWidth || newHead.y < 0 || newHead.y >= gridHeight) {
            gameOver = true;
            return;
        }

        for (const auto& segment : snake) {
            if (segment.x == newHead.x && segment.y == newHead.y) {
                gameOver = true;
                return;
            }
        }

        snake.insert(snake.begin(), newHead);

        if (newHead.x == fruit.x && newHead.y == fruit.y) {
            spawnFruit();
        } else {
            snake.pop_back();
        }
    }

    void render() {
        window.clear();

        sf::RectangleShape rectangle(sf::Vector2f(gridSize - 1, gridSize - 1));

        rectangle.setFillColor(sf::Color::Red);
        rectangle.setPosition(fruit.x * gridSize, fruit.y * gridSize);
        window.draw(rectangle);

        rectangle.setFillColor(sf::Color::Green);
        for (const auto& segment : snake) {
            rectangle.setPosition(segment.x * gridSize, segment.y * gridSize);
            window.draw(rectangle);
        }

        window.display();
    }
};

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    SnakeGame game;
    game.run();
    return 0;
}
