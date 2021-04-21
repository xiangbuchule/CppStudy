#include <iostream>

#include "TestClass.h"

#ifdef __cplusplus
TestClass::TestClass() {
    std::cout << "无参构造调用了" << std::endl;
};
TestClass::TestClass(const int& age, const int& sex) {
    std::cout << "有参构造调用了" << std::endl;
    this->age = age;
    this->sex = sex;
}
TestClass::TestClass(const TestClass& testClass) {
    std::cout << "拷贝构造调用了" << std::endl;
    this->age = testClass.age;
    this->sex = testClass.sex;
}

int& TestClass::getAge() {
    return this->age;
}
void TestClass::setAge(const int& age) {
    this->age = age;
}

int& TestClass::getSex() {
    return this->sex;
}
void TestClass::setSex(const int& sex) {
    this->sex = sex;
}

TestClass::~TestClass() {
    std::cout << "析构调用了" << std::endl;
};

#endif