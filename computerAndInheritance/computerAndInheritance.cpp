// computerAndInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Computer {
protected:
    int id;

public:
    int getId() {
        return id;
    }
    void setID(int i) {
        id = i;
    }
    Computer() {
        id = 0;
    }
    Computer(int i) {
        id = i;
    }
    virtual void shortForm() = 0;
    virtual void famousFor() = 0;

    virtual ~Computer() {
        cout << "deleted ";
    }

};

class Laptop :public Computer {
public:
 
    void shortForm() override{
        cout << "laptop is LP" << endl;
    }
    void famousFor() override {
        cout << "It is Famous for its Portability" << endl;

    }
};

class Desktop :public Computer {
public:
    void shortForm() override {
        cout << "Desktop is DK" << endl;

    }
    void famousFor() override {
        cout << "It is famous for its Flexibility" << endl;

    }

};

class supercomputer :public Computer {
public:
    void shortForm() override {
        cout << "SuperComputer is SC" << endl;

    }
    void famousFor()override {
        cout << "It is Famous for its Speed" << endl;

    }
};

int main()
{
    Computer* p = nullptr;
    p = new Laptop();
    p->shortForm();
    p->famousFor();
   // cout << p->getId();
    cout << "---------------------" << endl;
    delete p;


    p = new Desktop();
    p->shortForm();
    p->famousFor();
    cout << "---------------------" << endl;

    delete p;

    p = new supercomputer();
    p->shortForm();
    p->famousFor();
    cout << "---------------------" << endl;
    delete p;



    
}
