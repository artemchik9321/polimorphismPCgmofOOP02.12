#pragma once
#include<iostream>
#include <string>
using namespace std;

class PC
{
protected:
    string name;
    string cpu;
    string gpu;
    string ssd;
    string ram;
    double price;
public:
    PC() {}
    PC(string nm, string cp, string gp, string ss, string r)
    {
        name = nm;
        cpu = cp;
        gpu = gp;
        ssd = ss;
        ram = r;
        price = 0.0;
    }
    virtual void Print()
    {
        cout << name << "\t" << cpu << "\t" << gpu << "\t" << ssd << "\t" << ram << "\n";
    }
    virtual double GetPrice()
    {
        return price;
    }
};

class Office :public PC
{
    string micro;
public:
    Office() {}
    Office(string nm, string cp, string gp, string ss, string r, string mic) :PC(nm, cp, gp, ss, r), micro(mic)
    {
        micro = mic;
        price = 52000;
    }
    virtual void Print()
    {
        PC::Print();
        cout << "micro - " << micro << endl;
    }
    virtual double GetPrice()
    {
        cout << "Price PC - 88000" << endl;
        cout << "Price micro - 4000" << endl;
        price += 4000;
        return price;
    }

};

class Game :public PC
{
    string keypad;
    string headphones;
public:
    Game() {}
    Game(string nm, string cp, string gp, string ss, string r, string kp, string hp) :PC(nm, cp, gp, ss, r), keypad(kp), headphones(hp)
    {
        keypad = kp;
        headphones = hp;
        price = 88000;
    }
    virtual void Print()
    {
        PC::Print();
        cout << "keypad - " << keypad << endl;
        cout << "headphones - " << headphones << endl;
    }
    virtual double GetPrice()
    {
        cout << "Price PC - 88000" << endl;
        cout << "Price keypad - 4000" << endl;
        cout << "Price headphones - 3000" << endl;
        price += 7000;
        return price;
    }
};

class Home :public PC
{
    string webcam;
public:
    Home() {}
    Home(string nm, string cp, string gp, string ss, string r, string wc) :PC(nm, cp, gp, ss, r), webcam(wc)
    {
        webcam = wc;
        price = 35000;
    }
    virtual void Print()
    {
        PC::Print();
        cout << "Webcam -" << webcam << endl;
    }
    virtual double GetPrice()
    {
        cout << "Price PC - 35000" << endl;
        cout << "Price Cam - 3000" << endl;
        price += 3000;
        return price;
    }

};