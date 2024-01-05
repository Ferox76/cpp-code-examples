#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

    int maxNo = 4;

    if (argc > maxNo + 1 ) {
        cout << "Bitte geben Sie maximal " << maxNo << " Zahlen an." << endl;
        return 1;
    }

   int summe = 0;
    for (int i = 1; i < argc; ++i) {
        int zahl = stoi(argv[i]);
        summe += zahl;
    }

    cout << "Die Summe der angegebenen Zahlen ist: " << summe << endl;
    return 0;
}