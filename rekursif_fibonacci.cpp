#include<iostream>

using namespace std;

int fibonacci(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}

int main()
{
	int n;
	
	cout<<"Masukkan bilangan : ";cin>>n;
	cout<<"Hasil = "<<fibonacci(n);
}
