#include <iostream>
using namespace std;

class square
{
private:
    float side;

public:
    void input();
    void diagonal();
};

void square::input()
{
    cout << "Enter side of square: ";
    cin >> side;
}
void square::diagonal()
{
    cout << "Diagonal of square = " << 1.414 * side;
}
int main()
{
    square s;
    s.input();
    s.diagonal();
    return 0;
}