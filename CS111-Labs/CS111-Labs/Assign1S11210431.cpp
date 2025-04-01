#include <iostream>
using namespace std;

int main()
{
		double sea_surf_temp = 0.0, atmos_press = 0.0;
		int vert_wind_shear = 0;

		//Required Range'
		double required_sea_surf_temp = 26.5;

		cout << "Enter the Sea Surface Temperature (°C): ";
		cin >> sea_surf_temp;

		if (sea_surf_temp >= required_sea_surf_temp) {
			cout << "Enter Vertical Wind Shear (m/s): ";
		}

	return 0;
}