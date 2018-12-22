#include <iostream>
using namespace std;
/* This program was just written to try different errors in
the textbook problem 6 chapter 1*/
 int main()

{

	int number_of_pods, peas_per_pod, total_peas;
	cout<<"Press enter after entering the number.\n";
	cout<<"Enter the number of pods:\n";
	cin>>number_of_pods;
	cout<<"enter the number of peas per pod:\n";
	cin>>peas_per_pod;
	total_peas=number_of_pods*peas_per_pod;
	cout<<"if you have:";
	cout<<number_of_pods;
	cout<<"pea pods.\n";
	cout<<"and";
	cout<<peas_per_pod;
	cout<<"peas in each pod, then\n";
	cout<<"you have";
	cout<<total_peas;
	cout<<"peas in all pods.\n";
	return 0;
}

