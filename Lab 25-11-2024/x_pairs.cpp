#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int limit = static_cast<int>(sqrt(n));// used static cast here to convert double of sqrt into int to use it in loop
    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << " are:" << endl;

    for (int x = 0; x <= limit; x++) 
    {
        for (int y = 0; y <= limit; y++) 
        {
            if (x * x + y * y == n) 
            {
                cout << "(" << x << ", " << y << ")" << endl;
                // Since (x, y) and (y, x) are the same, we use break to avoid duplicate pairs
                break;
            } 
             else if (x * x + y * y > n)
              {
                break;
            }
        }
    }

    return 0;
}
