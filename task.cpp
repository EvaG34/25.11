#include <iostream>
using namespace std;

class CPU
{
public:
    void Print()
    {
        cout << "CPU: Intel" << endl;
    }
};
class SSD
{
public:
    void Print()
    {
        cout << "SSD: Samsung" << endl;
    }
};
class RAM
{
public:
    void Print()
    {
        cout << "RAM: 16 GB" << endl;
    }
};
class Mouse
{
public:
    void Print()
    {
        cout << "Mouse: Logitech" << endl;
    }
};
class Web
{
public:
    void Print()
    {
        cout << "Web: Logitech" << endl;
    }
};
class Laptop
{
    string model;
    double price;

    CPU cpu;
    SSD ssd;
    RAM ram;

    Mouse* mouse;
    Web* web;
public:
    Laptop(string m, double pr)
    {
        model = m;
        price = pr;
        mouse = nullptr;
        web = nullptr;
    }
    void SetMouse(Mouse* m)
    {
        mouse = m;
    }
    void SetWeb(Web* w)
    {
        web = w;
    }
    void Print()
    {
        cout << "Laptop: " << model << endl;
        cout << "Price: " << price << endl;

        cpu.Print();
        ssd.Print();
        ram.Print();

        if (mouse != nullptr)
            mouse->Print();

        if (web != nullptr)
            web->Print();
    }
};
int main()
{
    Mouse mouse;
    Web web;

    Laptop laptop("ASUS", 30000);

    laptop.SetMouse(&mouse);
    laptop.SetWeb(&web);

    laptop.Print();

    return 0;
}
