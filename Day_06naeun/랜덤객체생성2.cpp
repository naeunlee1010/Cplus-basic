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
		string arr[3] = { "�׶�","����","�����佺" };
		string terran[3] = { "��Ʋũ����","���̽�","��ũ" };
		string protoss[3] = { "ĳ����","���","����" };
		string zerg[3] = { "��Ʈ�󸮽�Ʈ" ,"�����","���۸�" };

		random_device rd;
		uniform_int_distribution<int> dis(0, 2);
		tribe = arr[dis(rd)];
		if (tribe == "�׶�") unitname = terran[dis(rd)];
		if (tribe == "����") unitname = zerg[dis(rd)];
		if (tribe == "�����佺") unitname = protoss[dis(rd)];


		cout << tribe << " " << unitname << endl;
	}
};
int main() {

	Unit arr[5];

	return 0;
}