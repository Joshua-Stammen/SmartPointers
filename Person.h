#ifndef MOD8_PERSON_H
#define MOD8_PERSON_H

#include <iostream>
#include <memory> // for smart pointers
using namespace std;


class Person
{
private:
    string firstname;
    string lastname;
    int arNumber;
    //Resource *pResource;
    shared_ptr<Resource>pResource; //declare a shared pointer
public:
    Person(string fn, string ln, int an);
    //Person(const Person &p); //copy constructor
    ~Person();
    string GetName() const; /// return first + last
    // Setter and Getter for the arNumber
    int getArNumber() const;
    void setArNumber(int arNumber);

    const string &getFirstname() const;

    void setFirstname(const string &firstname);

    // Operator overload for < and >
    bool operator < (Person &p) const ;
    bool operator < (int n) const;
    friend bool operator < (int n, const Person &p);
    void AddResource();
    string GetResourceName()const;
    //Person&operator = (const Person &p);
    // These should work with int < Person
    // 2) Person < int, int > Person, Person > int

};
bool operator < (int i, Person &p);

#endif //MOD8_PERSON_H