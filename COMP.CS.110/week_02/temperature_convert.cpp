#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a temperature: ";
    double temperature;
    double temp_celcious;
    double temp_fahrenheit;
    cin >> temperature;
    temp_fahrenheit = (temperature * 1.8) + 32;
    temp_celcious = (temperature - 32)/1.8;
    cout << temperature << " degrees Celsius is " << temp_fahrenheit << " degrees Fahrenheit" << "\n";
    cout << temperature << " degrees Fahrenheit is " << temp_celcious << " degrees celcious" << "\n";
    return 0;
}
