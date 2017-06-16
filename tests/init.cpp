#include <qSort.hpp>
#include <vector>
#include <catch.hpp>
using namespace std;

SCENARIO("qSort","[sort]")
{
	vector <int> v;
	v.push_back(111);
	v.push_back(222);
	v.push_back(666);
	v.push_back(333);
	v.push_back(555);
	v.push_back(444);
	REQUIRE(v[0] == 111);
	REQUIRE(v[1] == 222);
	REQUIRE(v[2] == 666);
	REQUIRE(v[3] == 333);
	REQUIRE(v[4] == 555);
	REQUIRE(v[5] == 444);
	qSort(v.begin(), v.end());
	REQUIRE(v[0] == 111);
	REQUIRE(v[1] == 222);
	REQUIRE(v[2] == 333);
	REQUIRE(v[3] == 444);
	REQUIRE(v[4] == 555);
	REQUIRE(v[5] == 666);
}
