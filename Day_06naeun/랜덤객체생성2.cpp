#include<iostream>
#include<string>
#include<random>
using namespace std;
class Unit {
private:
	string tribe;
	string unitname;
	
public:
	
	Unit() {
		string arr[3] = { "테란","저그","프로토스" };
		string terran[3] = { "베틀크루저","레이스","탱크" };
		string protoss[3] = { "캐리어","드라군","질럿" };
		string zerg[3] = { "울트라리스트" ,"히드라","저글링" };

		random_device rd;
		uniform_int_distribution<int> dis(0, 2);
		tribe = arr[dis(rd)];
		if (tribe == "테란") unitname = terran[dis(rd)];
		if (tribe == "저그") unitname = zerg[dis(rd)];
		if (tribe == "프로토스") unitname = protoss[dis(rd)];


		cout << tribe << " " << unitname << endl;
	}
};
int main() {

	Unit arr[5];

	return 0;
}