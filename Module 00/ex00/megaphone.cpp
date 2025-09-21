#include <iostream>
#include <cctype>

std::string upperStr(std::string str)
{
    std::string res = "";
    int i = 0;
    int len = str.length();
    while (i < len)
        res += toupper(str[i++]);
    
    return res;
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }

    while (--argc)
    {
        std::cout <<  upperStr(argv[argc]);
        if(argc > 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    
    return 0;
}