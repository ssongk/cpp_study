#include <iostream>

class Ex1
{
	int var1 = 1;
	int var2 = 2;
	char var3 = 'c';
public:
	int squre_var1() {
		std::cout << "value: " << var1 * var1 << std::endl;
		return 0;
	}
};

class Ex2
{
	int var1 = 21;
public:
	virtual int get_sum(int x, int y)
	{
		return x + y;
	};
	virtual void reset_values()
	{
		var1 = 0;
		std::cout << "reset_values: " << var1 << std::endl;
	};
};

class Ex3 : public Ex2
{
	int var1 = 31;
public:
	void get_values() {
		var1 = 31;
		std::cout << "get_values: " << var1 << std::endl;
	};
	int get_sum(int x, int y) override {
		return x + y + 1;
	}
};

class Ex4
{
	int var1 = 41;
	int var2 = 42;
public:
	virtual void func1() {
		std::cout << "[Ex4] func1" << std::endl;
	};
	virtual void func2() {
		std::cout << "[Ex4] func2" << std::endl;
	};
};

class Ex5 : virtual public Ex4, virtual public Ex2, virtual public Ex1
{
	int var1 = 51;
public:
	void func1() {
		std::cout << "Ex4 function override??" << std::endl;
	};
	virtual void v_ex5() {
		std::cout << "v_ex5" << std::endl;
	};
};

int main(void)
{
	Ex1* ex1 = new Ex1;
	Ex2* ex2 = new Ex2;
	Ex3* ex3 = new Ex3;
	Ex5* ex5 = new Ex5;

	ex1->squre_var1();
	ex2->reset_values();
	ex3->get_sum(1,2);
	ex5->func1();
	ex5->v_ex5();
	ex5->squre_var1();
		
	delete ex1;
	delete ex2;
	delete ex3;
	delete ex5;
}
