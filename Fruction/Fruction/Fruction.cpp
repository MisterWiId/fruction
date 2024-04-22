#include <iostream>

using namespace std;
/// <summary>
/// num - Числтель
/// denum - Знаменатель
/// </summary>
class Fraction
{
private:
    int num;   
    int denum;
public:
    // Конструктор с параметрами
    Fraction(int n1, int n2)
    {
        num = n1;
        denum = n2;
    }
    // Конструктор без параметров
    Fraction()
    {
        num = 1;
        denum = 1;
    }
    void print()
    {
        cout << num << "/" << denum << endl;
    }
    // Функция сокращения дроби
    void redaction(int num1, int num2)
    {
        int a = 0;
        if (num1 > num2)
        {
            a = num1;
        }
        else if (num1 < num2)
        {
            a = num2;
        }
        else
        {
            a = 0;
        }
        for (size_t i = 0; i < a; i++)
        {
            if (num1 % (i + 1) == 0 and num2 % (i + 1) == 0)
            {
                num1 = num1 / (i + 1);
                num2 = num2 / (i + 1);
            }
        }
        cout << num1 << "/" << num2 << endl;
    }
};

int main()
{
    Fraction fraction = Fraction(4, 10);
    fraction.print();
    fraction.redaction(100, 10);
}
