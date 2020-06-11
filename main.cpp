#include <iostream>

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
    {
        std::cout << " I am running "  << std::endl;
        std::cout << howFast << std::endl;
    };

int main() {
  std::cout << "Hello World!\n";
  Person p;
  Person p2;
  p.run(1, false);
    std::cout << p.age << std::endl;
    std::cout << p.height << std::endl;
  p2.run(3, true);

}