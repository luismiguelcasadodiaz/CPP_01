#include <iostream>
#include <string>

int main(void)
{
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringVAR;
    std::string &stringREF = stringVAR;

    std::cout << "The memory address of the string variable    :" << &stringVAR << std::endl;
    std::cout << "The memory address of the string pointer     :" << &stringPTR << " helds  " << stringPTR << std::endl;
    std::cout << "The memory address held by string reference   :" << &stringREF << std::endl;

    std::cout << "The value of the string variable             :" << stringVAR << std::endl;
    std::cout << "The value pointed to by the string pointer   :" << *stringPTR << std::endl;
    std::cout << "The value pointed to by the string reference :" << stringREF << std::endl;
    return (0);
}