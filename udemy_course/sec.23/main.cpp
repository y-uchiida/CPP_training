#include "Car.cpp"
#include "Ambulance.cpp"

int main()
{
	Car car("Daniel");

	Ambulance anb("Elith");

	car.supply(5);
	car.drive();

	/* AnbulanceはCarを継承したので、
	 * supplyが使えるし、オーバーライドしたdriveも使える
	 */
	anb.supply(10);
	anb.drive();
	anb.emergency();

	return (0);
}