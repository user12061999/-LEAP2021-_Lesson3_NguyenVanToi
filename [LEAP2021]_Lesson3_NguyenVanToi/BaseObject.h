#include <iostream>
#include <cstring>
using namespace std;

class BaseObject {
public:
	int id;
	char* name;
	char* position;

	/*void setName(char* n){
		strcpy(name, n);
	}*/
	/*void getName() {
		cout << name;
	}*/
	/*void getId(char* i) {
		strcpy(id, i);
	}
	void getPos(char* pos) {
		strcpy(position, pos);
	}*/
	void setId(int i) {
		id = i;
	}
	void getId() {
		cout << id;
	}
};

class StaticObjet :public BaseObject {

};
