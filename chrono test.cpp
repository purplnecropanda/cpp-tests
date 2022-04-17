//using the chrono library output 64 ticks per second in the console
#include <chrono>
#include <iostream>
#include <string>

using namespace std;

int main() {
	chrono::steady_clock::time_point start2 = chrono::steady_clock::now();
	chrono::steady_clock::time_point end2 = chrono::steady_clock::now();
	chrono::duration<double> time_span2 = chrono::duration_cast<chrono::duration<double>>(end2 - start2);
	//run a continous string stream to output the time in seconds
	//ratelimit the output to 64 outputs per second
	while (time_span2.count() < 10.0 / 64.0) {
		cout << "64 tick clock: " << time_span2.count() << " seconds" << endl;
		end2 = chrono::steady_clock::now();
		time_span2 = chrono::duration_cast<chrono::duration<double>>(end2 - start2);
	}

return 0;
}
