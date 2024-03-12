#include<iostream>

using namespace std;
class Dist
{
	int feet;
	float inches;
	
	public:
	void get Dist()
	{
		cout<<"enter distance(feet,inches):";
		cin>>feet>>inches;
	}
	void put Dist()
	{
		cout<<"feet="<<"inches="<<inches<<endl;
		
	}
	dist addDist( const Dist d1,const Dist d2)
	{
		Dist result;
		result.feet=d1.feet+d2.feet;
		result.inches=d1.inches+d2.inches;
		if(result.inches>=12)
		{
			result.feet+=static_cast<int>(result.inches/12);
			result.inches=fmod(result.inches,12);
		}
		return result;
	}
};
int main()
{
	Dist d1,d2;
	d1.getdist();
	d2.getdist();
	Dist sukm=d1.adddist(d1,d2);
	cout<<"sum of distance"<<endl;
	sum.putDist();
	return 0;
}
