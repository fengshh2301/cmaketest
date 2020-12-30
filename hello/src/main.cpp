#include <iostream>
#include "add.h"

int main(int argc, char** args)
{
    std::cout << "hello world!" << std::endl;
	std::cout << "5+6=" << add(5, 6) << std::endl;
    return 0;
}