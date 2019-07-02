double getBmi(double height, double weight)
{
	height = height / 100;
	double bmi = weight / height / height;
	return  bmi;
}