#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void print_cost(double cost);
void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping){
	return base_cost += (base_cost * tax_rate) + shipping;
}

void print_cost(double cost){
	cout << "Cost is: " << cost << endl;
}

void greeting(string name, string prefix, string suffix){
	cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main()
{
	double cost {0};
	
	greeting("Glenn Jones", "Dr.", "M.D.");
	
	cost = calc_cost(100.0, 0.08, 4.25);
	
	cout << fixed << setprecision(2);
	print_cost(cost);
	
	greeting("Jane Rogers", "Professor", "Ph.D");
	cost = calc_cost(100.0, 0.08);
	print_cost(cost);
	
	greeting("Frank Miller", "Writer");
	cost = calc_cost(100);
	print_cost(cost);
	
	greeting("Willow Smith", "Mrs.", "Ph.D");
	greeting("Harry Howard");
	
	
	return 0;
}
