#include <iostream>
#include <cmath>
//1

using namespace std;

class Vector
{
private:
	int *x1;
	int *y1;
	int *x2;
	int *y2;

public:

	double d1 = 0;
	double d2 = 0;
	double sx = 0;
	double sy = 0;
	double mx = 0;
	double my = 0;
	double d = 0;

	Vector(int X1, int Y1, int X2, int Y2)
	{
		this->x1 = new int(X1);
		this->y1 = new int(Y1);
		this->x2 = new int(X2);
		this->y2 = new int(Y2);
	}


	/*Vector(int X1, int Y1, int X2, int Y2)
	{
		X1 = 0;
		Y1 = 0;
		X2 = 0;
		Y2 = 0;
	}
*/
	Vector();

	void setX1(int X1);
	void setY1(int Y1);

	void setX2(int X2);
	void setY2(int Y2);

	
	//void dovzhina(double d1, int X1, int Y1, double d2, int X2, int Y2);

	void dovzhina( int X1, int Y1, int X2, int Y2);
	
	void plus(int X1, int Y1, int X2, int Y2);
	void minus(int X1, int Y1, int X2, int Y2);
	void dobutok(int X1, int Y1, int X2, int Y2);

	void vivod();


	~Vector() {};
	

	//delete X1; delete Y1; delete X2; delete Y2;

};


Vector::Vector()
{
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;


}

void Vector::setX1(int X1)

{
	cout << "ВВедіть X1" << endl;

		cin >> X1;
}



void Vector::setY1(int Y1)

{
	cout << "ВВедіть Y1" << endl;

	cin >> Y1;
}


void Vector::setX2(int X2)

{
	cout << "ВВедіть X2" << endl;

	cin >> X2;
}



void Vector::setY2(int Y2)

{
	cout << "ВВедіть Y2" << endl;

	cin >> Y2;
}


// void  Vector::dovzhina(double d1, int X1, int Y1, double d2, int X2, int Y2)
void  Vector::dovzhina( int X1, int Y1, int X2, int Y2)

{
	d1 = sqrt((X1 * X1) + (Y1 * Y1));
	d2 = sqrt((X2 * X2) + (Y2 * Y2));
}

void  Vector::plus(int X1, int Y1, int X2, int Y2)
{
	sx = X1 + X2;
	sy = Y1 + Y2;
}


void  Vector::minus(int X1, int Y1, int X2, int Y2)
{
	mx = X1 - X2;
	my = Y1 - Y2;

}

void  Vector::dobutok(int X1, int Y1, int X2, int Y2)
{

	d = X1 * X2 + Y1 * Y2;
}






void Vector::vivod()
{
	cout << "Довжина першого вектора =  " << d1 << endl;
	cout << "Довжина другого вектора =  " << d2 << endl;
	cout << "Сума векторів -   " << sx << " , "<< sy << endl;
	cout << "Різниця векторів -   " << mx << " , " << my << endl;
	cout << "Добуток векторів -   " << d << endl;
}








int main()
{
	setlocale(LC_CTYPE, "ukr");
	
	Vector obj;

	Vector(1, 2, 3, 4);
	obj.setX1(1);
	obj.setY1(1);
	obj.setX2(1);
	obj.setY2(1);
	obj.dovzhina(1,2,3,4);
	obj.plus(1,2,3,4);
	obj.minus(1,2,3,4);
	obj.dobutok(1,2,3,4);
	obj.vivod();
	getchar(); getchar();
}
