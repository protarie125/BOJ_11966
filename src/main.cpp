#include <iostream>

using namespace std;

using ull = unsigned long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = ull{};
	cin >> n;

	cout << ((n & ~(n - 1)) == n ? 1 : 0);

	return 0;
}