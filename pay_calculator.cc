#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int hours, overtime, overtime_threshold = 45;
double hourly_rate = 15.00, overtime_rate = 20.00;
string password;
char admin;

int correct_password();

int main()
{
    cout << "Are you an administrator (y/n)? ";
    cin >> admin;
    if (admin == 'y')
    {
        correct_password();
    }
    while(true)
    {
        cout << "Please enter the number of hours worked: ";
        cin >> hours;
        if (hours < 0 || hours > 110)
        {
            cout << "Nice try bucko, how many hours did you actually work?" << endl;
        }
        else
        {
            if (hours > overtime_threshold)
            {
                overtime = hours - overtime_threshold;
                hours = overtime_threshold;
            }
            break;
        }
    }
    
}
    
    

int correct_password()
{
    while(true)
    {
        cout << "Please enter password: ";
        cin >> password;
        if (password == "pass")
        {
            cout << "Please enter the overtime threshold: ";
            cin >> overtime_threshold;
            cout << "Please enter the hourly rate followed by overtime rate: ";
            cin >> hourly_rate >> overtime_rate;
            break;
        }
        else
        {
            cout << "Please enter a correct valid password" << endl;
        }
    }
    return(0);
}