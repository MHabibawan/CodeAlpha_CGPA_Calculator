#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

main(){
	cout<<"***** CGPA Calculator ***** \n";
	while (true){
		cout<<"enter the number of subjects \n";
		int numsubject;
		cin>>numsubject;
		vector<float> credits(numsubject);
		vector<float> gradepoints(numsubject);
		float totalgradepoints = 0.0;
		float totalcredits = 0.0;
		for (int i= 0 ; i<numsubject; i++){
			cout<<"Enter the credit hour of  subject "<<(i+1)<<":";
			cin>> credits[i];
			cout<<" Enter the grade points in subject "<<(i+1)<<" : ";
			cin>>gradepoints[i];
			 totalgradepoints += credits[i] * gradepoints[i];
			 totalcredits += credits[i];
		}
		if (totalcredits == 0){
			cout<<" Total credits cannot be zero "<<endl;
			continue;
		}
		float cgpa= totalgradepoints  / totalcredits;
		cout<< fixed <<setprecision(2);
		cout<<" Your CGPA is : "<< cgpa <<endl;


	}
	return 0;
}
