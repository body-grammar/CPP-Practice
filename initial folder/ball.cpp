#include <iostream>

// input
int tower_height() 
{
    int tower_height;

    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> tower_height;
    return tower_height;
}

// ball height
int ballHeight(int tower_height, int seconds) 
{
    float gravity = 9.8;

    float fallDistance = (gravity * seconds * seconds) / 2;

    float ball_height = tower_height - fallDistance;

    if (ball_height < 0.0) 
        return 0.0;

    return ball_height;
}

// result
void printBallHeight(float ball_height, int seconds) 
{
    if (ball_height > 0.0) {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ball_height << " meters\n";
    } else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
}

void fin(float tower_height, int seconds)
{
    float bh = ballHeight(tower_height, seconds);
    printBallHeight(bh, seconds);
}

int main()
{
    int th = tower_height();

    fin(th, 0);
    fin(th, 1);
    fin(th, 2);
    fin(th, 3);
    fin(th, 4);
    fin(th, 5);

    return 0;
}