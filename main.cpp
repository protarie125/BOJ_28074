#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;
	auto thereIs = vb(5, false);
	for (const auto& x : s) {
		if ('M' == x) {
			thereIs[0] = true;
		}
		else if ('O' == x) {
			thereIs[1] = true;
		}
		else if ('B' == x) {
			thereIs[2] = true;
		}
		else if ('I' == x) {
			thereIs[3] = true;
		}
		else if ('S' == x) {
			thereIs[4] = true;
		}
	}

	const auto ans = std::reduce(thereIs.begin(), thereIs.end(), true, [](auto l, auto r) { return l && r; });
	cout << (ans ? "YES" : "NO");

	return 0;
}