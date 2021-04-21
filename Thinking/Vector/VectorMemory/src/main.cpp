#include <iostream>
#include <vector>

#include "TestClass.h"

int main() {

    std::cout << "-- 程序开始 -- Program Start --" << std::endl;

    /**
     * 疑问：
     *      new Vector<std::string> 中的是std::string对象在堆上还是栈上
    */
    TestClass testClass(10, 1);

    std::vector<TestClass>* temp = new std::vector<TestClass>();

    temp->push_back(testClass);

    TestClass* bb = new TestClass(20, 0);

    std::cout << "1:" << &testClass << std::endl
              << "2:" << &(temp[0]) << std::endl
              << "3:" << bb << std::endl;

    /**
     * 可以明显看到vecter管理的对象在堆区中，会触发拷贝构造函数
    */

    std::vector<TestClass> temp2;

    temp2.push_back(testClass);

    std::cout << "1:" << &testClass << std::endl
              << "2:" << &(temp2[0]) << std::endl
              << "3:" << bb << std::endl;

    /**
     * 可以明显看到vecter管理的对象在堆区中，会触发拷贝构造函数
    */

    return 0;
}