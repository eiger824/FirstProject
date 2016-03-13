#include <string>
#include "../include/MyObject.hpp"
using namespace std;

MyObject::MyObject() : m_name(""), m_surname(""), m_age(0), m_email(""), m_is_new(false) {
  cout << "MyObject being created...";
}

MyObject::~MyObject() {}

string MyObject::getName() {
  return m_name;
}
void MyObject::setName(string name) {
  m_name = name;
}
string MyObject::getSurname() {
  return m_surname;
}
void MyObject::setSurname(string surname) {
  m_surname = surname;
}
short MyObject::getAge() {
  return m_age;
}
void MyObject::setAge(short age) {
  m_age = age;
}
string MyObject::getEmail() {
  return m_email;
}
void MyObject::setEmail(string email) {
  m_email = email;
}
void MyObject::setAllFields(string name, string surname,
			    short age, string email) {
  setName(name);
  setSurname(surname);
  setAge(age);
  setEmail(email);
}
  
