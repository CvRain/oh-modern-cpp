#include <array>
#include <iostream>
#include <random>
#include <vector>

int main() {
	std::uniform_int_distribution<int> distribution(0,10);
	std::default_random_engine engine{};
	std::vector<int> vector{};
	std::array<int,10> array{};
	for(int i=0; i<10; i++) {
		vector.push_back(distribution(engine));
		array[i] = distribution(engine);
	}
	for(const auto &it : vector) {
		std::cout << it << "\t";
	}
	std::cout << std::endl;
	for(const auto &it:array) {
		std::cout << it << "\t";
	}
	std::cout << std::endl;
}