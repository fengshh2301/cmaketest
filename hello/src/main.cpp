#include <iostream>
#include "add.h"
#include "adds.h"

int main(int argc, char** args)
{
    std::cout << "hello world!" << std::endl;
	std::cout << "5+6=" << add(5, 6) << std::endl;
	std::cout << "52+36=" << adds(52, 36) << std::endl;
    return 0;
}