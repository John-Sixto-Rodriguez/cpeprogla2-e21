#include<iostream>
#include <fstream>
#include<stdlib.h>

using namespace std;

int main()
{
    ifstream f("input.txt");
    
    int x,A;
    
    while (f >> x){
	
	for (int i=0;i<x;i++){
		if ((i%3==0)||(i%5==0))
		A=A+i;	
		{
	}
}
	cout<<A;
	}
    //fclose(f);
    system("pause");
    return 0;
}
