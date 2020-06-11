#include <iostream>

struct Person           //User Defined Type
{
    int age;            //data
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;

    void run(int howFast, bool startWithLeftFoot);  //function
};

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