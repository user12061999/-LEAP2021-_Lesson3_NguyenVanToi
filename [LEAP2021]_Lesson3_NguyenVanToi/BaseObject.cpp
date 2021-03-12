#include <iostream>
using namespace std;
#include <list>
class BaseObject
{
public:
	int id;
	std::string name;
	std::string position;

	void getName() {
		cout << "Name: " << name << endl;
	}
	void getID() {
		cout << "ID: " << id << endl;
	}
	void move() {
		cout << "object move: "  << endl;
	}
	void getPosition() {
		cout << "Positon: " << position << endl;
	}

	void setName() {
		cout << "ten vat:";
		cin >> name;
	}
	void setID() {
		cout << "ID:";
		cin >> id;
	}

	void setPos() {
		cout << "Vi tri cua vat:";
		cin >> position;
	}
	
	BaseObject();
	~BaseObject();

};

class StaticObject:public BaseObject{};
class Tree :public StaticObject {};
class House :public StaticObject {};

class DynamicObject :public BaseObject {};
class Motorbike :public DynamicObject {};
class Car :public StaticObject {};

BaseObject::BaseObject()
{
}

BaseObject::~BaseObject()
{
}
void main() {
	Car c;
	Motorbike m;
	House h;
	Tree t;

	list<BaseObject*> listobj;
	listobj.push_back(&c);
	listobj.push_back(&m);
	listobj.push_back(&h);
	listobj.push_back(&t);
	for (auto obj : listobj) {
		obj->setName();
		obj->setPos();
	}
	for (auto obj : listobj) {
		obj->getName();
		obj->move();
		obj->getPosition();
		cout << endl;
	}
	listobj.clear();
}