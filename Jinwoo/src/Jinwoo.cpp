#include<Jin.h>

class Jinwoo : public Jin::App {
public:
	Jinwoo() {

	}
	~Jinwoo() {

	}
};

Jin::App* Jin::CreateApp() {
	return new Jinwoo();
}