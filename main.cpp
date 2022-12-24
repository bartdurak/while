#include <iostream>
using namespace std;
// pętla while nie ma iteracji
int uczniowie = 1; int minut=0;

int main() {

    while (uczniowie <=10)
    {
        minut = minut + 4;
        uczniowie = uczniowie *2;
        cout << " minęło minut: " << minut;
        cout << " zapytai uczniowie: " << uczniowie<< endl;

    }
return 0;
}
