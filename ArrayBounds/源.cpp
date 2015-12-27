#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

	int a[4] = { 0 }, b[4] = { 0 };

	a[4] = 123;

	b[4] = 456;

	printf("a=%x &a[3]=%x b=%x &b[3]=%x\n", a, &a[3], b, &b[3]);

	printf("a[0]=%d a[4]=%d b[0]=%d b[4]=%d\n", a[0], b[0], a[4], b[4]);

	return 0;

}
