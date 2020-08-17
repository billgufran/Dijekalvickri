#include <iostream>	 
#include <conio.h> 
#include <iomanip>
using namespace std; 

/* 	1. Simple Calculator
	2. Geometric Area
	3. Geometric Volume
	4. Perimeter
	5. Multiplication table
	6. Percentage of-
	7. Exit 
*/
main ()
{	//Main function start
char option, null_conf = 'z';

do
{	//Main do start

	int opt;
	char conf;
	
	system ("cls");
	cout <<	setfill ('=');
	cout << setw(50) << '='							<< endl;
	cout <<	"||\t\t\t\t\t\t||" 						<< endl;
	cout << "||\t\t Dijekalvickri  \t\t||" 			<< endl;
	cout <<	"||\t\t\t\t\t\t||" 						<< endl;
	cout << setw(50) << '='							<< endl;
	cout << "//multiple calculation app to solve your problem//\n\n" 		<< endl; 
	
	cout << "/1/ Simple Calculator" << "\t\t" << "/4/ Perimeter" 			<< endl;
	cout << "/2/ Geometric Area" 	<< "\t\t" << "/5/ Multiplication Table" << endl;
	cout << "/3/ Geometric Volume" 	<< "\t\t" << "/6/ Percentage of-" 		<< endl;
	cout << endl << "/7/ Exit" << endl;	
	
	cout << endl << "What can we help? (example: type '4' for perimeter): ";
	cin >> opt;
	
	switch (opt)
 {	//Main switch start
 
 	//Exit
 	case 7:
 	system ("cls");
	cout <<	setfill ('=');
	cout << setw(50) << '='							<< endl;
	cout <<	"||\t\t\t\t\t\t||" 						<< endl;
	cout << "||\t\t Dijekalvickri  \t\t||" 			<< endl;
	cout <<	"||\t\t\t\t\t\t||" 						<< endl;
	cout << setw(50) << '='							<< endl << endl;
	
	cout << "Created by"							<< endl;
	cout << "Bill" << endl;
	cout << "github.com/billgufran"							<< endl;
	
	cout << "Thank you. Have a nice day :)\n";
	cout << "Press any key to exit";
	
 	getch ();	
 	option = 'x';
 	break;
 
	//Calculator
	case 1:
	{
		do
		{
		char op;
		double x, y;
		
		system ("cls");
		cout <<	setfill ('=');
		cout << setw(42) << '='											<< endl;
		cout <<	"||\t\t\t\t\t||" 										<< endl;
		cout << "||\t 2 VARIABLE CALCULATOR  \t||" 						<< endl;
		cout <<	"||\t\t\t\t\t||" 										<< endl;
		cout << setw(42) << '='											<< endl << endl;
		cout << "Please type the numbers with operator [+ - * / %]" 		<< endl;
		cout << "example: 27-46"  										<< endl << endl;
		cin >> x >> op >> y;
		
		switch (op)
			{
			case '+':
			cout << " = " << x+y;
			break;
			
			case '-':
			cout << " = " << x-y;
			break;
			
			case '*':
			cout << " = " << x*y;
			break;
			
			case '/':
			if (y==0)
			{ cout << "Cannot divide with zero"; }
			else
			{ cout << " = " << x/y; }
			break;
			
			case '%':
			cout << " = " << int(x)%int(y);
			break;
			
			default:
			cout << "Please input valid operator ( + , - , * , / , % )";
			break;
			}
		
		cout <<	endl << endl<< "Do another calculation (Y/N)?";
		conf = getch ();
		}
		while (conf == 'y' || conf == 'Y');
		
		option = 'n';
	}
	
	//Area
	case 2:
	{
		do
		{
				if (opt != 2) break;
			
			const float pi = 3.14;	
			float width, length, radius, height, a_side, b_side, base;
			int figure;
			
			system ("cls");
		cout <<	setfill ('=');
		cout << setw(50) << '='							<< endl;
		cout <<	"||\t\t\t\t\t\t||" 						<< endl;
		cout << "||\t\t GEOMETRIC AREA  \t\t||" 		<< endl;
		cout <<	"||\t\t\t\t\t\t||" 						<< endl;
		cout << setw(50) << '='							<< endl << endl;
			
			cout << "1. Square\n" << "2. Rectangle\n" << "3. Circle\n" << "4. Triangle\n" << "5. Parallelogram\n" << "6. Trapezoid\n" << endl;
			cout << "Which figure that you want to measure? (code number only): ";
			cin >> figure;
			cout << endl;
			cout << setfill (' ');
			
			switch (figure)
			{		
					default:
					do
					{
						cout << "Oops, currnetly we only have 6 option :(" << endl << "please choose again: ";
						cin >> figure; cout << endl;
					}
					while (figure > 6);
					
					//Square
					case 1:
						
						if (figure == 1)
					{	
					cout << "Please input\n";
					cout << "Side: "; cin >> a_side; cout << endl;
					cout << "Square Area = Side*Side\n"; 
					cout << setw(13) << "=" << ends << a_side << '*' << a_side << endl;
					cout << setw(13) << "=" << ends << a_side*a_side;
					break;
					}
					
					//Rectangle
					case 2:
						
						if (figure == 2)
					{	
					cout << "Please input\n";
					cout << "Width : "; cin >> width;
					cout << "Length: "; cin >> length; cout << endl;
					cout << "Rectangle Area = Width*Length\n"; 
					cout << setw(16) << "=" << ends << width << '*' << length << endl;
					cout << setw(16) << "=" << ends << width*length;
					break; 
					}
					
					
					//Circle
					case 3:
						
						if (figure == 3)
					{
					cout << "Please input\n";
					cout << "Radius: "; cin >> radius; cout << endl;
					cout << "Circle Area = Pi*Radius*Radius\n"; 
					cout << setw(13) << "=" << ends << pi << '*' << radius << '*' << radius << endl;
					cout << setw(13) << "=" << ends << pi*radius*radius; 
					break;
					}
					
					//Triangle
					case 4:
					
						if (figure == 4)
					{
					cout << "Please input\n";
					cout << "Base  : "; cin >> base;
					cout << "Height: "; cin >> height; cout << endl;
					cout << "Triangle Area = 0.5*Base*Height\n"; 
					cout << setw(15) << "=" << ends <<  "0.5*" << base << '*' << height << endl;
					cout << setw(15) << "=" << ends << 0.5*base*height; 
					break;
					}
					
					//Parallelogram
					case 5:
					
						if (figure == 5)
					{
					cout << "Please input\n";
					cout << "Base  : "; cin >> base;
					cout << "Height: "; cin >> height; cout << endl;
					cout << "Parallelogram Area = Base*Height\n"; 
					cout << setw(20) << "=" << ends << base << '*' << height << endl;
					cout << setw(20) << "=" << ends << base*height;
					break;
					}
					
					//Trapezoid
					case 6:
					
						if (figure == 6)	
					{
					cout << "Please input\n";
					cout << "a Side: "; cin >> a_side;
					cout << "b Side: "; cin >> b_side;
					cout << "Height: "; cin >> height; cout << endl;
					cout << "Trapezoid Area = 0.5(a Side+b Side)*Height\n"; 
					cout << setw(16) << "=" << ends << "0.5(" << a_side << '+' << b_side << ")*" << height  << endl;
					cout << setw(16) << "=" << ends << 0.5*(a_side+b_side)*height;
					break;
					}
			}
			cout <<	endl << endl<< "Do another calculation (Y/N)?";
			conf = getch ();
			
			//Case where the input is wrong
			if (conf != 'y' || conf != 'Y' || conf != 'N' || conf != 'n')
				null_conf = 'x';

			do
			{
				if (conf == 'y' || conf == 'Y' || conf == 'N' || conf == 'n') break;
				cout << endl << "Please only type Y <Yes> or N <No>";
				conf = getch ();			
			}
			while (null_conf == 'x');
		}
		while (conf == 'y' || conf == 'Y');
		if (conf == 'N' || conf == 'n')
		option = 'n';
	}

	//Volume
	case 3:
	{
		do
		{
				if (opt != 3) break;
			
			const float pi = 3.14;	
			float width, length, radius, height, a_side, b_side, base;
			int figure;
			
			system ("cls");
			cout <<	setfill ('=');
			cout << setw(50) << '='							<< endl;
			cout <<	"||\t\t\t\t\t\t||" 						<< endl;
			cout << "||\t\t GEOMETRIC VOLUME  \t\t||" 		<< endl;
			cout <<	"||\t\t\t\t\t\t||" 						<< endl;
			cout << setw(50) << '='							<< endl << endl;
		
			cout << "1. Cube\n" << "2. Solid Rectangular\n" << "3. Sphere\n" << "4. Cylinder\n" << "5. Cone\n" << "6. Square Pyramid\n" << endl;
			cout << "Which figure that you want to measure? (code number only): ";
			cin >> figure;
			cout << endl;
			cout << setfill (' ');
			
			switch (figure)
			{		
					default:
					do
					{
						cout << "Oops, currnetly we only have 6 option :(" << endl << "please choose again: ";
						cin >> figure; cout << endl;
					}
					while (figure > 6);
					
					//Cube
					case 1:
						
						if (figure == 1)
					{	
					cout << "Please input\n";
					cout << "Side: "; cin >> a_side; cout << endl;
					cout << "Cube Volume = Side*Side*Side\n"; 
					cout << setw(13) << "=" << ends << a_side << '*' << a_side << '*' << a_side << endl;
					cout << setw(13) << "=" << ends << a_side*a_side*a_side; 
					break;
					}
					
					//Solid Rectangular
					case 2:
						
						if (figure == 2)
					{
					cout << "Please input\n";
					cout << "Width : "; cin >> width;
					cout << "Length: "; cin >> length;
					cout << "Height: "; cin >> height; cout << endl;
					cout << "Solid Rectangular Volume = Width*Length*Height\n"; 
					cout << setw(26) << "=" << ends << width << '*' << length << '*' << height << endl;
					cout << setw(26) << "=" << ends << width*length*height;
					break; 
					}
					
					//Sphere
					case 3:
						
						if (figure == 3)
					{
					cout << "Please input\n";
					cout << "Radius: "; cin >> radius; cout << endl;
					cout << "Sphere Volume = (4/3)*Pi*Radius*Radius*Radius\n"; 
					cout << setw(15) << "=" << ends << "(4/3)*" << pi << '*' << radius << '*' << radius << '*' << radius << endl;
					cout << setw(15) << "=" << ends << (4/3)*pi*radius*radius*radius; 
					break;
					}
					
					//Cylinder
					case 4:
						
						if (figure == 4)
					{
					cout << "Please input\n";
					cout << "Radius: "; cin >> radius;
					cout << "Height: "; cin >> height; cout << endl;
					cout << "Cylinder Volume = Pi*Radius*Radius*Height\n"; 
					cout << setw(17) << "=" << ends << pi << '*' << radius << '*' << radius << '*' << height << endl;
					cout << setw(17) << "=" << ends << pi*radius*radius*height; 
					break;
					}
					
					//Cone
					case 5:
						
						if (figure == 5)
					{
					cout << "Please input\n";
					cout << "Radius: "; cin >> radius;
					cout << "Height: "; cin >> height; cout << endl;
					cout << "Cone Volume = (1/3)*Pi*Radius*Radius*Height\n";
					cout << setw(13) << "=" << ends << "(1/3)*" << pi << '*' << radius << '*' << radius << '*' << height << endl;
					cout << setw(13) << "=" << ends << (4/3)*pi*radius*radius*height;  
					break;
					}
					
					//Square Pyramid
					case 6:
						
						if (figure == 6)
					{
					cout << "Please input\n";
					cout << "Side: "; cin >> a_side;
					cout << "Height: "; cin >> height; cout << endl;
					cout << "Square Pyramid Volume = (1/3)*Side*Side*Height\n";
					cout << setw(23) << "=" << ends << "(1/3)*" << a_side << '*' << a_side << '*' << height << endl;
					cout << setw(23) << "=" << ends << (4/3)*a_side*a_side*height; 
					break;
					}
			}
		cout <<	endl << endl<< "Do another calculation (Y/N)?";
		conf = getch ();
		
			//Case where the input is wrong
			if (conf != 'y' || conf != 'Y' || conf != 'N' || conf != 'n')
				null_conf = 'x';
			
			do
			{
				if (conf == 'y' || conf == 'Y' || conf == 'N' || conf == 'n') break;
				cout << endl << "Please only type Y <Yes> or N <No>";
				conf = getch ();			
			}
			while (null_conf == 'x');
		}
		while (conf == 'y' || conf == 'Y');
		if (conf == 'N' || conf == 'n')
		option = 'n';
	}
	
	//Perimeter
	case 4:
	{
		do
		{
				if (opt != 4) break;
			
			const float pi = 3.14;	
			float width, length, radius, height, a_side, b_side, base;
			int figure;
			
			system ("cls");
			cout <<	setfill ('=');
			cout << setw(42) << '='							<< endl;
			cout <<	"||\t\t\t\t\t||" 						<< endl;
			cout << "||\t\t PERIMETER  \t\t||" 		<< endl;
			cout <<	"||\t\t\t\t\t||" 						<< endl;
			cout << setw(42) << '='							<< endl << endl;
		
			cout << "1. Square\n" << "2. Rectangle\n" << "3. Circle\n" << "4. Triangle\n" << "5. Parallelogram\n" << endl;
			cout << "Which figure that you want to measure? (code number only): ";
			cin >> figure;
			cout << endl;
			cout << setfill (' ');
			
			switch (figure)
			{		
					default:
					do
					{
						cout << "Oops, currnetly we only have 5 option :(" << endl << "please choose again: ";
						cin >> figure; cout << endl;
					}
					while (figure > 5);
										
					//Square
					case 1:
						
						if (figure == 1)
						
					{
					cout << "Please input\n";
					cout << "Side: "; cin >> a_side; cout << endl;
					cout << "Square Perimeter = 4*Side\n"; 
					cout << setw(18) << "=" << ends << "4*" << a_side << endl;
					cout << setw(18) << "=" << ends << 4*a_side; 
					break;	
					}	
					
					
					//Rectangle
					case 2:
						
						if (figure == 2)
						
					{
					cout << "Please input\n";
					cout << "Width : "; cin >> width;
					cout << "Length: "; cin >> length; cout << endl;
					cout << "Rectangle Perimeter = 2*Length + 2*Width\n"; 
					cout << setw(21) << "=" << ends << "2*" << width << '+' << "2*" << length << endl;
					cout << setw(21) << "=" << ends << (2*width)+(2*length);
					break;
					} 
					
					//Circle
					case 3:
					
						if (figure == 3)
					
					{
					cout << "Please input\n";
					cout << "Radius: "; cin >> radius; cout << endl;
					cout << "Circle Perimeter = 2*Pi*Radius\n"; 
					cout << setw(18) << "=" << ends << "2*" << pi << '*' << radius << endl;
					cout << setw(18) << "=" << ends << 2*pi*radius; 
					break;
					}
					
					//Triangle
					case 4:
					
						if (figure == 4)
					
					{
					cout << "Please input\n";
					cout << "Base  : "; cin >> base;
					cout << "a Side: "; cin >> a_side;
					cout << "b Side: "; cin >> b_side; cout << endl;
					cout << "Triangle Perimeter = Base+a Side+b Side\n"; 
					cout << setw(20) << "=" << ends << base << '+' << a_side << '+' << b_side << endl;
					cout << setw(20) << "=" << ends << base+a_side+b_side; 
					break;
					}
					
					
					//Parallelogram
					case 5:
					
						if (figure == 5)
					
					{
					cout << "Please input\n";
					cout << "a Side: "; cin >> a_side;
					cout << "b Side: "; cin >> b_side; cout << endl;
					cout << "Parallelogram Perimeter = 2*a Side + 2*b Side\n"; 
					cout << setw(25) << "=" << ends << "2*" << a_side << '+' << "2*" << b_side << endl;
					cout << setw(25) << "=" << ends << (2*a_side)+(2*b_side);
					break;
					}
					
			}
			cout <<	endl << endl<< "Do another calculation (Y/N)?";
			conf = getch ();
		
			//Case where the input is wrong
			if (conf != 'y' || conf != 'Y' || conf != 'N' || conf != 'n')
				null_conf = 'x';
			
			do
			{
				if (conf == 'y' || conf == 'Y' || conf == 'N' || conf == 'n') break;
				cout << endl << "Please only type Y <Yes> or N <No>";
				conf = getch ();			
			}
			while (null_conf == 'x');
		}
		while (conf == 'y' || conf == 'Y');
		if (conf == 'N' || conf == 'n')
		option = 'n';
	} 


	//Multiplication Table
	case 5:
	{
	
	do
	{
		if (opt != 5) break;
		
	int numb, mult1=1, mult2=31, mult3=51, mult4=71, mult5=91;
		
			system ("cls");
			cout <<	setfill ('=');
			cout << setw(50) << '='							<< endl;
			cout <<	"||\t\t\t\t\t\t||" 						<< endl;
			cout << "||\t\t MULTIPLICATION TABLE  \t\t||" 		<< endl;
			cout <<	"||\t\t\t\t\t\t||" 						<< endl;
			cout << setw(50) << '='							<< endl << endl;
		
			cout << "Type the number to multiply: ";
			cin >> numb;
			cout << endl;
			
			for (mult1==1 && mult2==31 && mult3==51 && mult4==71 && mult5==91; 
				 mult1<=20 && mult2<=50 && mult3<=70 && mult4<=90 && mult5<=100; 
				 mult1++ && mult2++ && mult3++ && mult4++ && mult5++)
				 
			{	cout << numb*mult1 << "\t\t| " << numb*mult2 << "\t\t| "<< 
				numb*mult3 << "\t\t| "<< numb*mult4 << "\t\t| "<< numb*mult5 << "\t\t| " << endl; 
			}
			
			cout <<	endl << endl<< "Do another calculation (Y/N)?";
			conf = getch ();
			
			//Case where the input is wrong
			if (conf != 'y' || conf != 'Y' || conf != 'N' || conf != 'n')
				null_conf = 'x';
			
			do
			{
				if (conf == 'y' || conf == 'Y' || conf == 'N' || conf == 'n') break;
				cout << endl << "Please only type Y <Yes> or N <No>";
				conf = getch ();
				if (conf == 'y' || conf == 'Y' || conf == 'N' || conf == 'n')
				null_conf = 'y';
			}
			while (null_conf == 'x');
		}
		while (conf == 'y' || conf == 'Y');
		if (conf == 'N' || conf == 'n')
			option = 'n';
		
	} //Case 5 end
 
 
	//Percentage of- 
	case 6: 
 	{ 	
 	do
 	{
	 			if (opt != 6) break;
	 			
	 	double xp = 0, yp = 0;
	 	char key;
	 	
	 do
	 {
		system ("cls");
		cout <<	setfill ('=');
		cout << setw(50) << '='											<< endl;
		cout <<	"||\t\t\t\t\t\t||" 										<< endl;
		cout << "||\t\t PERCENTAGE OF-  \t\t||"		 						<< endl;
		cout <<	"||\t\t\t\t\t\t||" 										<< endl;
		cout << setw(50) << '='											<< endl << endl;
		cout << "To know 'x' is n% of 'y', please do:"		 			<< endl;
		cout << "type 'x' value >> [enter] >> type 'y' value >> [enter]"<< endl << endl;
		
			if(yp == 0) 
			{ 
				cin >> xp; cout << " is ";
				cout << "...."; 
				key = 'f';
				cout << " % of "; cin >> yp;  
				}
			else 
			{ 
				cout << xp << " is ";
				cout << (xp/yp)*100; key = 't';
				cout << " % of " << yp;
				break;
				} 
		
	 }	
 	 while (key == 'f');
 	 
 	 		//Confirmation
			cout <<	endl << endl<< "Do another calculation (Y/N)?";
			conf = getch ();
			
			//Case where the input is wrong
			if (conf != 'y' || conf != 'Y' || conf != 'N' || conf != 'n')
				null_conf = 'x';
			
			do
			{
				if (conf == 'y' || conf == 'Y' || conf == 'N' || conf == 'n') break;
				cout << endl << "Please only type Y <Yes> or N <No>";
				conf = getch ();
				if (conf == 'y' || conf == 'Y' || conf == 'N' || conf == 'n')
				null_conf = 'y';
			}
			while (null_conf == 'x'); 
	}	
	 while (conf == 'y' || conf == 'Y');
		if (conf == 'N' || conf == 'n')
			option = 'n';
	} //Case 6 end


 	//Null
 	default:
 	option = 'n';
 	
 }	//Main switch end
}	//Main do end
 while (option == 'n');
}	//Main function end
