#include <iostream>
using namespace std;

int main()
{
	int number_of_pods, peas_per_pod, total_peas;
	cout<<"Hello. \n";
	cout<<"Press enter after entering the number.\n";

	cout<<"Enter the number of pods:\n";
	cin>>number_of_pods;

	cout<<"Enter the number of peas per pod:\n";
	cin>>peas_per_pod;

	total_peas = number_of_pods / peas_per_pod;

	cout<<"if you have: ";
	cout<< number_of_pods;
	cout<<" pea pods.\n";

	cout<<"and ";

	cout<<peas_per_pod;
	cout<<" peas in each pod, then\n";
	cout<<"you have ";

	cout<<total_peas;
	cout<<" peas in all pods.\n";

	cout<<"Goodbye. \n";

	return 0;
}

