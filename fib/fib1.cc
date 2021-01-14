#include <iostream>
#include <map>
#include <cstdio>
#include <cstring>

int main(int argc, char* argv[])
{
    int num = atoi(argv[1]);

    std::map<unsigned int, unsigned long> FibData{{0, 1}, {1, 1}};

    for (int temp = 0; temp <= num; ++temp) {
	auto search = FibData.find(temp);
	if (search == FibData.end()) {
	    auto fibtemp = FibData[temp - 1] + FibData[temp - 2];
	    FibData.emplace(temp, fibtemp);
	}
	std::cout << "fibdata" << temp << "is" <<  FibData[temp] << std::endl;
    }

    return 0;

}
