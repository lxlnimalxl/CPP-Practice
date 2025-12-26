#include "iostream"
#include "string"

using namespace std;

class Room{
private:
    int roomId;
    string type;
    int price;
    string amenity;
    bool status;
public:
    Room(){
        cout << "room created" << endl;
        cout << "room information"<<endl;
        cout << "----------------"<<endl;
    }

    void setRoomId(int ROOMID = 0) {
        roomId = ROOMID;
    }

    void setPrice(int PRICE = 0) {
        price = PRICE;
    }

    void setStatus(bool STATUS = false) {
        status = STATUS;
    }

    void setType(string TYPE) {
        type = TYPE;
    }

    void setAmenity(string AMENITY) {
        amenity = AMENITY;
    }

    int getRoomId() const{
        return roomId;
    }

    int getPrice() const{
        return price;
    }

    string getType() const{
        return type;
    }

    string getAmenity() const{
        return amenity;
    }

    bool getStatus() const{
        return status;
    }

    void display (){
        cout << "ROOM ID : " << roomId << "\nPRICE : " << price << "\nSTATUS : " << status << "\nTYPE : " << type << "\nAMENITY : " << amenity <<endl;
    }
    ~Room(){
        cout << "----------------"<<endl;
        cout << "room deleted" << endl;
    }
};

class Guest{
private:

    string name;
    long long number;
    string email;
    int balance;
    struct reservationHistory {
        int year;
        int month;
        int day;
    };
    reservationHistory ReservationHistory;

public:


    Guest(){
        cout << "Guest Is Created" << endl;
        cout << "Guest information"<<endl;
        cout << "----------------"<<endl;
    }


    void setName (string N = "Guest Name") {
        name = N;
    }
    void setEmail (string E = "email@gamil.com") {
        email = E;
    }
    void setNamber (long long n = 9120000000) {
        number = n;
    }
    void setBalance (int b) {
        balance = b;
    }
    void setReservationHistory (const reservationHistory& r) {
        ReservationHistory = r;
    }
    void setYear (int y) {
        ReservationHistory.year = y;
    }
    void setMonth (int m) {
        ReservationHistory.month = m;
    }
    void setDay (int d) {
        ReservationHistory.day = d;
    }

    string getName()const{
        return name;
    }
    string GetEmail()const{
        return email;
    }
    long long GetNumber()const{
        return number;
    }
    int GetBlance()const{
        return balance;
    }
    reservationHistory GetReservationHistory()const{
        return ReservationHistory;
    }
    int GetYear()const{
        return ReservationHistory.year;
    }
    int GetMonth()const{
        return ReservationHistory.month;
    }
    int GetDay()const{
        return ReservationHistory.day;
    }

    void phoneChecker(){
        if (number > 9999999999){
            cout << "wrong number pls try again" << endl;
        }else if (number < 9000000000){
            cout << "wrong number pls try again" << endl;
        }
    }

    void display() const {
        cout << "Name: " << name << "\nPhone: " << number
             << "\nEmail: " << email << "\nBalance: " << balance << endl;
    }

};

int main (){
    Room r1;
    r1.setRoomId(22);
    r1.display();

    Guest g1;
    g1.setNamber(9126486103659413);
    g1.display();
}