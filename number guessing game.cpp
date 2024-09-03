#include <iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main ()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretnumber =rand()%100+1;
	int guess;
	int attempt=0;
	
		cout<<"welcome to the guessing game :"<<endl;
		cout<<"i have selected a number between 1 && 100 :"<<endl;
		do 
		{
			cout<<"enter your guess:";
			cin>>guess;
			attempt++;
		
		if(guess<secretnumber)
		{
	cout<<"you guess is too low"<<endl;
     	}
	else if(guess >secretnumber)
		{
	cout<<"you guess is too high"<<endl;
    	}
		else
        {
	cout<<" congratulation you guess the right number:"<<endl;
        }    
    }
    while(guess!=secretnumber);
    	return 0;

}

