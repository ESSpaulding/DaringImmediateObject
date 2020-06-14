#include <iostream>

struct Person           //User Defined Type
{
    int age;            //data
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    Person();
    void run(int howFast, bool startWithLeftFoot);  //function
};

Person::Person() : age(22), height(72), hairLength(0.f), GPA(0.f), SATScore(0)  {}

void Person::run(int howFast, bool startWithLeftFoot)  //function definition
    {
        std::cout << " I am running "  << std::endl;
        std::cout << howFast << std::endl;
    };

int main() {
  std::cout << "Hello World!\n";
  Person p;                             //instance of UDT
  Person p2;                            //second instance of UDT (object)    
  p.run(1, false);                      //using the run function of Person p
    std::cout << p.age << std::endl;    //data of Person Object is random because it is not constructed
    std::cout << p.height << std::endl;
  p2.run(3, true);

}