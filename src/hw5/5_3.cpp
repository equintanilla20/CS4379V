#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <random>
#include <time.h>

void lambdatest(std::vector<int> &in, std::vector<int> &out, std:: vector<int>& rands) {
	int index = 0;
	
	std::transform(in.begin(), in.end(), out.begin(), [&](int num) {
		return rands[index++] + num;
	});
}


int main() {

	std::vector<int> in = {1,2,3,4,5};
	std::vector<int> rands;
	
	std::random_device rnd_device;
	std::mt19937 mersenne_engine {rnd_device()};
	std::uniform_int_distribution<int> dist {1, 10};
	
	auto gen = [&dist, &mersenne_engine]() {
		return dist(mersenne_engine);
	};

	for (size_t i = 0; i < in.size(); i++) {
		rands.push_back(gen());
	}
	
	
	std::vector<int> out;
	out.resize(in.size());
	
	lambdatest(in, out, rands);
	
	
	for(int i:out){
	  std::cout << i << "  " << std::endl;
	}
	return 0;
}