#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int x{};
    cout << "enter";
    cin >> x;

    switch (x) {
        case 1:
            cout << "enter 1" << endl;
            break;
        case 2:
            cout << "enter 2" << endl;
            break;
        default:
            cout << "unknown" << endl;

    }
    return 0;
}