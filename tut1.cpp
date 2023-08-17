#include <iostream>
void a();
void b();
using namespace std;

int main()
{


	a();
	b();
	a();

}
void a()
{
	printf("Hello\n");
}
void b()
{
	printf("Bye\n");
	a();
}




