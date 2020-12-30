#include <iostream>
#include "add.h"
#include "add_st.h"
#include "add_dy.h"

int main(int argc, char** args)
{
    std::cout << "hello world!" << std::endl;
	std::cout << "5+6=" << add(5, 6) << std::endl;
	std::cout << "52+36=" << add_st_func(52, 36) << std::endl;
	std::cout << "2+33=" << add_dy_func(2, 33) << std::endl;
    return 0;
}