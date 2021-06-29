#include "Relaxmain.h"

int main(int argc, const char** argv) {
    if (argc != 16) {
        std::cerr << "wrong number of args" << std::endl;
        return 0;
    }
	bool boolargs[3];
	double dblargs[9];
	std::stringstream sinput;
	std::stringstream soutput;

    std::stringstream temp;
	//argv[0] = .exe file
	sinput << argv[1]; // input file
	soutput << argv[2]; // output file
	dblargs[0] = boost::lexical_cast<double>(argv[3]); //scaling
    std::stringstream(argv[4]) >> std::boolalpha >> boolargs[0]; //discretize_lengths
	dblargs[1] = boost::lexical_cast<double>(argv[5]); //density
	dblargs[2] = boost::lexical_cast<double>(argv[6]); // spring stiffnes
	dblargs[3] = boost::lexical_cast<double>(argv[7]); // fixed spring stiffness
	dblargs[4] = boost::lexical_cast<double>(argv[8]); // spring damping
    std::stringstream(argv[9]) >> std::boolalpha >> boolargs[1]; // attach fixed
	dblargs[5] = boost::lexical_cast<double>(argv[10]); // static friction
	dblargs[6] = boost::lexical_cast<double>(argv[11]); //dynamic friction
	dblargs[7] = boost::lexical_cast<double>(argv[12]); //restitution
	dblargs[8] = boost::lexical_cast<double>(argv[13]); //rigit body sleep threshold
    std::stringstream(argv[14]) >> std::boolalpha >> boolargs[2]; // visual debugger
	const int iterations = boost::lexical_cast<int>(argv[15]);
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << " ";
    }

	relaxation::relax_main(sinput.str(), soutput.str(), dblargs, iterations, boolargs);
	return 1;
}
