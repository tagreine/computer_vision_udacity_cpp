#include <iostream>

using namespace std;

// enum FillColor is part of the global scope and is therefore not a good choice
// instead use enum class and FillColor ::
enum class FillColor {
    RED,
    BLUE,
    GREEN
};

enum class OutlineColor {
    RED,
    YELLOW,
    PURPLE
};

int main() 
{
    FillColor fill_color = FillColor::RED;
    FillColor alt_fill_color = FillColor::RED;

    if (fill_color == FillColor::RED && alt_fill_color == FillColor::RED) {
        cout << "Both colors are red" <<endl;
    }

}