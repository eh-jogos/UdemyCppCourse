#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int length {};
	int width {};
	int height {};
	
	const int inches_limit {10};
	const int lower_volume_limit {100};
	const int upper_volume_limit {500};
	
	const double base_cost {2.50};
	const double lower_surcharge {0.10};
	const double upper_surcharge {0.25};
	
	cout << "Welcome to the package cost calculator!" << endl;
	cout << "Please insert the package dimensions in inches, separated by space (length width height): ";
	cin >> length >> width >> height;
	
	if (length <= inches_limit && width <= inches_limit && height <= inches_limit){
		double total_price {base_cost};
		int volume = length * width * height; 
		
		cout << "Your package volume is " << volume << " cubic inches." << endl;;
		
		if (volume > upper_volume_limit){
			cout << "It has exceeded " << upper_volume_limit << " cubic inches. There will be a " << 
					upper_surcharge * 100 << "% surcharge." << endl;
			total_price += base_cost * upper_surcharge;
		} else if (volume > lower_volume_limit){
			cout << "It has exceeded " << lower_volume_limit << " cubic inches. There will be a " << 
					lower_surcharge * 100 << "% surcharge." << endl;
			total_price += base_cost * lower_surcharge;
		}
		
		cout << fixed << setprecision(2); // prints dollars nicely
		cout << "Final Shipping Cost: $" << total_price << endl;
		
	} else {
		cout << "I'm sorry, we can't ship packages that exceed 10 inches in any dimension.";
	}
	
	return 0;
}