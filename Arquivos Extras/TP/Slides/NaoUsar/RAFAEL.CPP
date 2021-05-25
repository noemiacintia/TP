#include<fstream>//required for file operation:
#include<iostream>//required for input/output:
using namespace std;

main()
{
	ofstream myFile; //Object for Writing:
	ifstream file;   //Object for reading:
	char ch[30];     //Arguments: name & size of array.
	char text;       //character variable to read data from file:

	cout<<"Enter some Text here: "<<endl;
	cin.getline(ch,30);  //Getline function.

       //opening file for Writing:
	myFile.open("InfoBrother.txt", ios::out);
	if(myFile) //Error Checker:
	{
    	   myFile<<ch;
    	   cout<<"Data store Successfully: \n\n"<<endl;
	}
	else cout<<" Error while opening file: "<<endl;
	myFile.close(); //file close:

	//opening file for reading:
	file.open("InfoBrother.txt", ios::in);
	if(file) //Error Checker:
	{
    	   file.seekg(7, ios::beg); //skip first 7 bytes from beginning:
    	   cout<<" The output( after skipping first 7 bytes) is: ";

    	   while(!file.eof()) //read data from file till end of file:
    	   {
        	file.get(text); //read data:
        	cout<<text;     //display data:
    	   }
	}
	else cout<<" Error while Opening File: "<<endl;
	file.close(); //file close:

	return 0;
}
