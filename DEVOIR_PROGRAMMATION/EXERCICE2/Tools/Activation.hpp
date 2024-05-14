#ifndef ACTIVATION_HPP
#define ACTIVATION_HPP
using namespace std;
class Activation
{
	public:
		Activation();
		~Activation();
		void verifyActivation(string code);
		bool getStatus();
		string getSerialCode();
	private:
		bool status;
		string serialCode;
};
#endif
