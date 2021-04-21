#ifndef __TESTCLASS_H__
#define __TESTCLASS_H__

class TestClass {
  private:
    int age;
    int sex;

  public:
    TestClass();
    TestClass(const int& age, const int& sex);
    TestClass(const TestClass& testClass);

    int& getAge();
    void setAge(const int& age);

    int& getSex();
    void setSex(const int& sex);

    ~TestClass();
};

#endif