#include <iostream>
#include <iomanip>
using namespace std;

// SAMUEL TORRES
const float MILE_TO_KM = 1.61;
const float KM_TO_MILE = 0.621;

float convertMilesToKm(float miles);
float convertKmToMiles(float km);

int main()
{
    int choice;
    float miles, km;

    cout << fixed << showpoint << setprecision(3);

    do
    {
        cout << "\nPlease input\n";
        cout << "1 Convert miles to kilometers\n";
        cout << "2 Convert kilometers to miles\n";
        cout << "3 Quit\n";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Please input the miles to be converted\n";
            cin >> miles;
            km = convertMilesToKm(miles);
            cout << miles << " miles = " << km << " kilometers" << endl;
        }
        else if (choice == 2)
        {
            cout << "Please input the kilometers to be converted\n";
            cin >> km;
            miles = convertKmToMiles(km);
            cout << km << " kilometers = " << miles << " miles" << endl;
        }
        else if (choice != 3)
        {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}

float convertMilesToKm(float miles)
{
    return miles * MILE_TO_KM;
}

float convertKmToMiles(float km)
{
    return km * KM_TO_MILE;
}
