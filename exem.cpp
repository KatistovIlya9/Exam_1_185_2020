#include <iostream>

using namespace std;

class LengthConverter
{
    public:
    void fun1 (int izmereniya, char preobrazovanie)
    {
        cout << "Введите во что преобразовать (1 - Км в миль, 2 - Миль в км) " << endl;
        cin >> preobrazovanie;
        int Mi;
        Mi = '1';
        int Km;
        Km = '2';
        if (preobrazovanie == Km)
        {
            int chislo;
            cout << "Введите количество миль" << endl;
            cin >> chislo;
            izmereniya = (chislo * 1.609);
            cout << "Преобразованные мили в километры = " << izmereniya << endl;
        }
        else if (preobrazovanie == Mi)
        {
            int chislo;
            cout << "Введите количество километров" << endl;
            cin >> chislo;
            izmereniya = (chislo / 1.609);
            cout << "Преобразовання километров в мили = " << izmereniya << endl;
        }
    }
};

int main()

{
setlocale(LC_ALL, "rus");
LengthConverter God;
God.fun1(0, 0);
return 0;
}