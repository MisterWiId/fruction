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
    void redaction(Fraction number)
    {
        int a = 0;
        if (number.num > number.denum)
        {
            a = number.num;
        }
        else if (number.num < number.denum)
        {
            a = number.denum;
        }
        else
        {
            a = 0;
        }
        for (size_t i = 2; i < a; i++)
        {
            if (number.num % i == 0 and number.denum % i == 0)
            {
                num = number.num / i;
                denum = number.denum / i;
            }
        }
    }

    Fraction operator * (Fraction b) 
    {    
        return Fraction(num * b.num, denum * b.denum);
    }
    Fraction operator / (Fraction b)
    {
        return Fraction(num * b.denum, denum * b.num);
    }
    Fraction operator + (Fraction b)
    {
        return Fraction(num + b.num, denum * b.denum);
    }
    Fraction operator - (Fraction b)
    {
        return Fraction(num - b.num, denum * b.denum);
    }
    Fraction operator == (Fraction b)
    {
        return Fraction(num = b.num, denum = b.denum);
    }
    Fraction operator <= (Fraction b)
    {
        return Fraction(b.num, b.denum);
    }
    Fraction operator >= (Fraction b)
    {
        return Fraction(num, denum);
    }
    Fraction operator -= (Fraction b)
    {
        return Fraction(num = (num - b.num), denum = (denum * b.denum));
    }
    Fraction operator += (Fraction b)
    {
        return Fraction(num = (num + b.num), denum = (denum * b.denum));
    }
    Fraction operator *= (Fraction b)
    {
        return Fraction(num = (num * b.num), denum = (denum * b.denum));
    }
    Fraction operator *= (Fraction b)
    {
        return Fraction(num = (num * b.denum), denum = (denum * b.num));
    }
};

int main()
{
    Fraction fraction;
    fraction.redaction(Fraction(4, 10));
    fraction.print();
    

    Fraction a = Fraction(0, 4);
    Fraction b = Fraction(40, 10);
    Fraction c = a == b;
    c.redaction(c);
    c.print();

    int i = 1;
    i = i++ + ++i;
    cout << i;
}
