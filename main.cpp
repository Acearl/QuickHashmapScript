
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//I was tired doing this shit by hand on homework.
	//gives results of indexes after hashmap key hash worked on it.
	//I could have made the full program with an input to find the 
	//place to be. The actual hashmap function. But not now.
	//Hard coded function of hash
	string sel;
	string lim;
	int num;
	int limit;

	cout<<"hash value? ";
	getline(cin, sel);
	istringstream iss(sel);

	vector<int> numbers;
	
	cout<<"limit? ";
	cin>>lim;
	
	while(iss >> num)
	{
		numbers.push_back(num);
	}
	limit = stoi(lim);
	num = stoi(sel);
	//cout<<"sel "<<sel<<endl;
	
	int ans = 0;

	for(int j = 0; j< numbers.size(); j++)
	{
		num = numbers[j];
		cout<<"index value in hashmap :";
		for(int i = 0; i < limit; i++)
		{
			//ans = ((num%11) + (i * (5-(num%5))))%11; old formula
			ans = ((num%10)+(i*(7-(num%7))))%10;
			cout<<ans<<", ";
		}
		cout<<endl;

	}
		return 0;
}


