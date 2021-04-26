#include<iostream>

using namespace std;

class HotelRoom
{
    private:

        int room_num;
        int room_capacity;
        int occupancy; //0 if not occupied
        double daily_rate;

    public:
        HotelRoom(int room, int capacity, double rate); //constructor
        int addroom(int num, int cap, int rate);

        //Accessor functions
        int getnumber();
        int getcapacity();
        int getstatus();
        double getrate();

        //Mutator functions
        int changestatus(int num_of_guests);
        double changerate(double new_rate);

        void display();

};

HotelRoom::HotelRoom(int room, int capacity, double rate)
{
    room_num = room;
    room_capacity = capacity;
    daily_rate = rate;
    occupancy = 0;
}

int HotelRoom::getnumber()
{
    return room_num;
}


int HotelRoom::getcapacity()
{
    return room_capacity;
}


double HotelRoom::getrate()
{
    return daily_rate;
}
int HotelRoom::getstatus()
{
    return occupancy;
}

double HotelRoom::changerate(double new_rate)
{
    daily_rate = new_rate;
}

int HotelRoom::changestatus(int num_of_guests)
{
    occupancy = num_of_guests;
}

void HotelRoom::display()
{
    cout << "\nRoom number: " << getnumber()
         << "\nRoom status: " << getstatus()
         << "\nRoom rate: $" << getrate() << " per guest" << endl;
