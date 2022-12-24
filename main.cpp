#include <iostream>
using namespace std;
// do Kwhile nie ma iteracji
int uczniowie = 1; int minut=0;

int main() {


        do
        {
            minut++;
        uczniowie = uczniowie *2;
        cout << " minęło minut: " << minut;
        cout << " zapytai uczniowie: " << uczniowie<< endl;
    }
        while (uczniowie<<=10);
return 0;
}
