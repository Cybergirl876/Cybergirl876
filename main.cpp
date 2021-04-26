#include <iostream>
#include"res/reservation.h"

using namespace std;


void menu() {

    cout << "1. Add a room" << endl;
    cout << "2. Reserve a Room" << endl;
    cout << "3. Modify a room" << endl;
    cout << "4. View Room" << endl;
    cout << "5. Exit ";

}

int main()
{
    char option;
    int cap, num;
    double rate;



    menu();
    do
    {

        cout << "\n\nSelect and option: ";
        cin >> option;

        HotelRoom RoomObj1(349, 4, 150.00);
        HotelRoom RoomObj2(147, 2, 175.00);
        HotelRoom RoomObj3(10, 1, 150.00);

        switch(option)
        {
            case '1':
            {
                cout << "Enter the room number then room capacity: ";
                cin >> num >> cap;
                cout << "Enter the room rate: $";
                cin >> rate;
                HotelRoom room1(num, cap, rate);


                break;
            }

            case '2':
            {


                break;
            }
            case '3':
            {

                break;
            }
            case '4':
            {
                HotelRoom room1(num, cap, rate);
                room1.display();

                break;
            }
            case '5':
            {

                break;
            }
            default: cout << "Incorrect entry.\nPlease try again";
        }

    } while(option != '5');
    return 0;
}
