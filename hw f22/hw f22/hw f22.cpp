#include "settings.h"

class pet {
public:

    string name; // кличка
    int length; // длина
    int age; // возраст
    char* color; // цвет
    char* eye_color; // цвет глаз
    bool is_hungry; // голоден ли
    bool is_sleeping; // спит ли

    void sleep() {
        cout << name << " is sleeping\n";
    }
    void eat() {
        cout << name << " is eating\n";
    }
    void play() {
        cout << name << " is playing\n";
    }
    void toilet() {
        cout << name << " is pooping\n";
    }
};

class kettle {
public:

    char* maker; // производитель
    char* model; // модель
    char* color; // цвет
    float price; // цена
    float capacity; // общий объем
    float water_filling; // наполненность воды в данный момент
    bool is_on; // включен ли

    void boiling() {
        cout << "Kettle is boiling water\n";
    }
    void kettle_on() {
        cout << "Kettle on";
    }
    void kettle_off() {
        cout << "Kettle off";
    }
    void actual_filling() {
        cout << "There's " << water_filling << " liters of water in the kettle";
    }
};

int main()
{
    pet p;
    p.name = "Phoenix";
    p.toilet();

    kettle b;
    b.water_filling = 0.5;
    b.actual_filling();
}