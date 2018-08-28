#include <iostream>
#include <math.h>

using namespace std;

double gaussian_pdf(double mu, double sigma, double x)
{
	// Probability of x for 1-dim Gaussian
	// mean mu 
	// sigma (std deviation) (NOTE: sigma^2 is the variance)
	double num = exp( - (pow((x - mu), 2)) / ( 2.0 * pow(sigma, 2)) );
	double den = sqrt(2.0 * M_PI * (pow(sigma, 2)));
	return  num / den ;
}

int main()
{
    cout << gaussian_pdf(1.0, 2.0, 0.5) << endl;
    return 0;
}