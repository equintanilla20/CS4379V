#include <iostream>
#include <time.h>
#include <queue>

int main() {
	auto comparator = [](const auto &a, const auto &b){
		time_t current = time(NULL);
		struct tm *tm_struct = localtime(&current);
		int hour = tm_struct->tm_hour;
		if (6 <= hour && hour < 18)
			return a < b;
		return a > b;
	};

	std::priority_queue<int, std::vector<int>, decltype(comparator)> pq(comparator);
	
	return 0;
}