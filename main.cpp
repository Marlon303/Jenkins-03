#include <iostream>
using namespace std;

int a = 0;
int b = 0;
int tmp_c = 0;

int main() {
    
    cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: ?" << endl;
    cin >> a;
    cout << "Bitte geben Sie den ganzzahligen Wert der zweite Variable ein: ?" << endl;
    cin >> b;    
    
    tmp_c = a;
    a = b;
    b = tmp_c;

    cout << "Nach dem Tausch:" << endl;
    cout << "Wert der ersten Variable: " << a << endl;
    cout << "Wert der zweiten Variable: " << b << endl;

    system("pause");
    return 0;
}