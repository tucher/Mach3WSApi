#include <iostream>
#include "../QtWsTransport/QtWsTransport.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    auto t = new QtWsTransport();
    string p;
    cin >> p;
    return 0;
}
