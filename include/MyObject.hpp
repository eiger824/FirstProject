#ifndef FIRST_PROJECT_MY_OBJECT_H_
#define FIRST_PROJECT_MY_OBJECT_H_

#include <iostream>
#include <string.h>
#include <string>

using namespace std;
class MyObject {
private:
  string m_name;
  string m_surname;
  short m_age;
  string m_email;
  bool m_is_new;
public:
  MyObject();
  ~MyObject();
  string getName();
  void setName(string name);
  string getSurname();
  void setSurname(string surname);
  short getAge();
  void setAge(short age);
  string getEmail();
  void setEmail(string email);
  void setAllFields(string name, string surname,
		    short age, string email);
  void show();
};

#endif
