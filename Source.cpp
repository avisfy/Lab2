#include <iostream>
#include <cmath>

double leftRectangles(double a, double b, int n);
double trapez(double a, double b, int n);
double simpsons(double a, double b, int n);


double pogreshnostAbs(double x)
{
	double integral = 1.21895141;
	return fabs(integral - x);
}

double pogreshnostRel(double x)
{
	double integral = 1.21895141;
	double absPogr = pogreshnostAbs(x);
	return ((absPogr / fabs(x)) * 100);
}


int main()
{
	double a = 0;
	double b = 1;
	int n1 = 4;
	int n2 = 10;

	std::cout << std::fixed;
	std::cout.precision(4);
	std::cout << "\tLevux pryamoygolnikov\n";
	double integral = leftRectangles(a, b, n1);
	double absPogr = pogreshnostAbs(integral);
	double relPogr = pogreshnostRel(integral);
	std::cout << "n = " << n1 << ", integral = " << integral << ", pogreshnost absolutnaya ="<< absPogr<<", otnosit = "<< relPogr<<"%"<< std::endl;
	integral = leftRectangles(a, b, n2);
	absPogr = pogreshnostAbs(integral);
	relPogr = pogreshnostRel(integral);
	std::cout << "n = " << n2 << ", integral = " << integral << ", pogreshnost absolutnaya =" << absPogr << ", otnosit = " << relPogr << "%" << std::endl<< std::endl;
	
	std::cout << "\tTrapezii\n";
	integral = trapez(a, b, n1);
	absPogr = pogreshnostAbs(integral);
	relPogr = pogreshnostRel(integral);
	std::cout << "n = " << n1 << ", integral = " << integral <<  ", pogreshnost absolutnaya =" << absPogr << ", otnosit = " << relPogr << "%" << std::endl;
	integral = trapez(a, b, n2);
	absPogr = pogreshnostAbs(integral);
	relPogr = pogreshnostRel(integral);
	std::cout << "n = " << n2 << ", integral = " << integral << ", pogreshnost absolutnaya =" << absPogr << ", otnosit = " << relPogr << "%" << std::endl << std::endl;

	std::cout << "\tSimpsona\n";
	integral = simpsons(a, b, n1);
	absPogr = pogreshnostAbs(integral);
	relPogr = pogreshnostRel(integral);
	std::cout << "n = " << n1 << ", integral = " << integral << ", pogreshnost absolutnaya =" << absPogr << ", otnosit = " << relPogr << "%" << std::endl;
	integral = simpsons(a, b, n2);
	absPogr = pogreshnostAbs(integral);
	relPogr = pogreshnostRel(integral);
	std::cout << "n = " << n2 << ", integral = " << integral << ", pogreshnost absolutnaya =" << absPogr << ", otnosit = " << relPogr << "%" << std::endl << std::endl;

	system("pause");
	return 0;
}
