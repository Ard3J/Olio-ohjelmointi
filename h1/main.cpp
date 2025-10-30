#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int luku1, int luku2);
void calcDiv(int luku1, int luku2);
int retSum(int luku1, int luku2);
float retDiv(int luku1, int luku2);

int main()
{
    int a;
    int b;
    int resultSum;
    float resultDiv;
    cout << "Anna luku 1: " << endl;
    cin >> a;
    cout << "Anna luku 2: " << endl;
    cin >> b;
    calcSum(a,b);
    calcDiv(a,b);
    resultSum = retSum(a,b);
    cout << a << " + " << b << " = " << resultSum << endl;
    try
    {
        if(b != 0)
        {
            resultDiv = retDiv(a,b);
            cout << a << " / " << b << " = " << fixed << setprecision(2) << resultDiv << endl;
        }
        else
        {
            throw std::runtime_error("jakaja ei saa olla nolla!");
        }
    } catch (runtime_error& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}

void calcSum(int luku1, int luku2)
{
    int sum = luku1 + luku2;
    cout << luku1 << " + " << luku2 << " = " << sum << endl;
}

void calcDiv(int luku1, int luku2)
{
    float div;
    if (luku2 == 0)
    {
        cout << "Jakaja ei saa olla nolla" << endl;
    }
    else
    {
        div = luku1 / float(luku2);
        cout << luku1 << " / " << luku2 << " = " << fixed << setprecision(2) << div << endl;
    }
}

int retSum(int luku1, int luku2)
{
    int sum = luku1 + luku2;
    return sum;
}

float retDiv(int luku1, int luku2)
{
    float div = luku1 / float(luku2);
    return div;
}
