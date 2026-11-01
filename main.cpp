// Mason Ayala
// Lab 10 - Mutate via Reference

#include <iostream>
using namespace std;

void swap_values(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 3;
    int y = 7;

    cout << "Before: " << x << " " << y << "\n";

    swap_values(x, y);

    cout << "After: " << x << " " << y << "\n";

    int* p = &x;

    cout << "x via pointer: " << *p << "\n";

    return 0;
}
