//
// Created by butte on 11/14/17.
//

#include "Person.h"



int Person::getArNumber() const {
    return arNumber;
}

void Person::setArNumber(int arNumber) {
    Person::arNumber = arNumber;
}

/*!
 * Compare
 * @param p
 * @return
 */
bool Person::operator<(Person &p) const {
    return arNumber < p.arNumber;
}
/*!
 * Destructor, Clean memory
 */
Person::~Person()
{
    //delete[] pResource;// If pResource points to an array
    //delete pResource;
}
/*!
 * Get Person Name
 * @return  Person's Name
 */
string Person::GetName() const {
    return firstname + " " + lastname;
}

/*!
 * Compare Person < Inter
 * @param n integer
 * @return True or False
 */
bool Person::operator<(int n) const{
    return arNumber < n;
}

/*!
 * Compare integer < Person
 * @param n integer
 * @param p reference to Person
 * @return True or False
 */


Person::Person(string fn, string ln, int an)
{
    lastname = ln;
    firstname = fn;
    arNumber = an;
    //pResource = NULL; // prior to C++ 11
    //No need for smart pointers
    //pResource = nullptr; // C++11
}

bool operator<(int n, const Person &p) {
    return n < p.arNumber;
}

void Person::AddResource()
{
    // Resource r ("Hello");
    //pResource = &r //It only lives in this block
    //delete pResource; //NOT NEEDED
    pResource.reset();
    //pResource = new Resource(" Resource for" +  GetName());
    pResource = make_shared<Resource>("Resource for " + GetName());
}

const string &Person::getFirstname() const {
    return firstname;
}

void Person::setFirstname(const string &firstname) {
    Person::firstname = firstname;
}

string Person::GetResourceName() const {

    return pResource->GetName();
}

/*!
 * Copy Constructor
 * @param p Person Object to be copy
 */
Person::Person(const Person &p)
{
    firstname = p.firstname;
    lastname = p.lastname;
    arNumber = p.arNumber;
    //Do not copy the reference.  You need to
    // Create your own memory. Your own copy
    pResource = new Resource(p.pResource->GetName());
}

//Person &Person::operator=(const Person &p)
//{
//    firstname = p.firstname;
//    lastname = p.lastname;
//    arNumber = p.arNumber;
//    delete pResource;
//    pResource = new Resource(p.pResource->GetName());
//    return *this; // return yourself
//}
