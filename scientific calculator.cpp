#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
vector<string> history;
void showhistory()
{
    cout<<"---CALCULATION HISTORY---"<<endl;

    for(int i=0;i< history.size();i++)
    {
        cout<<i+1<<". "<<history[i]<<endl;
    }
}
void displaymenu()
{
	cout<<"--- MENU ---"<<endl;
	cout<<"1:"<<" "<<"BASIC MENU"<<endl;
	cout<<"2:"<<" "<<"SCIENTIFIC MENU"<<endl;
	cout<<"3:"<<" "<<"VIEW CALCULATOR HISTORY"<<endl;
	cout<<"4:"<<" "<<"CLEAR CALCULATOR HISTORY"<<endl;
	cout<<"5:"<<" "<<"EXIT"<<endl;
}
void Basicmenu()
{
	cout<<"--- BASIC MENU ---"<<endl;
	cout<<"1:"<<" "<<"ADDITION"<<endl;
	cout<<"2:"<<" "<<"SUBTRACTION"<<endl;
	cout<<"3:"<<" "<<"MULTIPLICATION"<<endl;
	cout<<"4:"<<" "<<"DIVISION"<<endl;
	cout<<"5:"<<" "<<"BACK TO MAIN MENU"<<endl;
}
void scientificmenu()
{
	cout<<"1:"<<" "<<"POWER"<<endl;
	cout<<"2:"<<" "<<"SQUARE ROOT"<<endl;
	cout<<"3:"<<" "<<"SINE"<<endl;
	cout<<"4:"<<" "<<"COSINE"<<endl;
	cout<<"5:"<<" "<<"TANGENT"<<endl;
	cout<<"6:"<<" "<<"INVERSE SINE"<<endl;
	cout<<"7:"<<" "<<"INVERSE COSINE"<<endl;
	cout<<"8:"<<" "<<"INVERSE TANGENT"<<endl;
	cout<<"9:"<<" "<<"FACTORIAL"<<endl;
	cout<<"10:"<<" "<<"PERCENTAGE"<<endl;
	cout<<"11:"<<" "<<"LOGARITHM"<<endl;
	cout<<"12:"<<" "<<"AVERAGE"<<endl;
	cout<<"13:"<<" "<<"ABSOLUTE"<<endl;
	cout<<"14:"<<" "<<"EXPONENT"<<endl;
	cout<<"15:"<<" "<<"CUBE ROOT"<<endl;
	cout << "16: BACK TO MAIN MENU" << endl;
}
void getnumbers(double *arr, int size)
{
	cout<<"Enter Numbers : "<<endl;
	for(int i=0;i<size;i++)
{  
    cin>>arr[i];
}
}
double cuberoot(double *arr,int size)
{
	double result= cbrt(arr[0]);
	cout<<"CUBE ROOT = "<<result<<endl;
	return result;
}
double exponent(double*arr,int size)
{
	double result=exp(arr[0]);
	cout<<"EXPONENT = "<<result<<endl;
	return result;
}
double absolute(double *arr, int size)
{
	double result=abs(arr[0]);
	cout<<"ABSOLUTE = "<<result<<endl;
	return result;
}
double average(double *arr, int size)
{
    double total=0;
    for(int i=0;i<size;i++)
    {
        total=total+arr[i];
    }
    double result=total/size;
    cout<<"AVERAGE = " <<result<< endl;
	return result;
}
double logarithm(double *arr, int size)
{
	if(arr[0]<=0)
	{
		cout<<"INVALID"<<endl;
		return NAN;	
	}
	double result =log10(arr[0]);
	return result;
}
double percentage(double *arr, int size)
{
	if(arr[1]==0)
	{
		cout<<"INVALID"<<endl;
		return NAN;
	}
	double result = (arr[0]/arr[1])*100;
	return result;
}
double power(double *arr , int size)
{
	double result;
	result = pow(arr[0],arr[1]);
	cout<<"RESULT : "<<result<<endl;
	return result;
}
double squareroot(double *arr,int size)
{
	if(arr[0] < 0)
{
    cout<<"ERROR: Negative number not allowed"<<endl;
    return NAN;
}
	return sqrt(arr[0]);
}
double sine(double *arr,int size)
{
	double radians = arr[0] * 3.14159 / 180;
    return sin(radians);
}
double cosine(double *arr, int size)
{
	double radians = arr[0] * 3.14159 / 180;
    return cos(radians);
}
double tangent(double *arr,int size)
{
	double radians = arr[0] * 3.14159 / 180;
    return tan(radians);
}
double inversesine(double *arr,int size)
{
	if(arr[0] < -1 || arr[0] > 1)
{
    cout << "ERROR: Input must be between -1 and 1" << endl;
    return NAN;
}
	return asin(arr[0])* 180/3.14159;
}
double inversecosine(double *arr,int size)
{
	if(arr[0] < -1 || arr[0] > 1)
{
    cout << "ERROR: Input must be between -1 and 1" << endl;
    return NAN;
}

	return acos(arr[0])* 180/3.14159;
}
double inversetangent(double *arr,int size)
{
	return atan(arr[0])* 180/3.14159;
}
double factorial(double *arr,int size)
{
	int result = 1;

for(int i = 1; i <= arr[0]; i++)
{
    result = result * i;
}
	return result;
}
double add(double *arr , int size)
{
	double total=0;
	for(int i=0;i<size;i++)
	{
		total=total+arr[i];
	}
	cout<<"RESULT = "<<total<<endl;
	return total;
}
double sub(double *arr , int size)
{
	double total=arr[0];
	for(int i=1;i<size;i++)
	{
		total=total-arr[i];
	}
	cout<<"RESULT = "<<total<<endl;
	return total;
}
double mul(double *arr ,int size)
{
	double total=arr[0];
	for(int i=1;i<size;i++)
	{
		total=total*arr[i];
	}
	cout<<"RESULT = "<<total<<endl;
	return total;
}
double div(double *arr , int size)
{
	bool found=true;
	if(size < 2)
{
    cout << "Please enter at least 2 numbers for division!" << endl;
    return NAN;
}
	double total=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]==0)
	      {
	      	cout<<"NOT DIVISIBLE BY 0 "<<endl;
	      	found=false;
	      	break;
		  }
		  total=total/arr[i];
	}
	    if(found)
		return total;
		return NAN;
	
}
int main()
{ 
    int choice=0;
    while(choice!=5)
    {
    	displaymenu();
    	cout<<"ENTER CHOICE :"<<" "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{	
			
    int basicchoice=0;
    while(basicchoice!=5)
    {
    	Basicmenu();
    	cout<<"ENTER CHOICE :"<<" "<<endl;
	cin>>basicchoice;
	switch(basicchoice)
	{
		case 1:
		{	
		    int size;
		    cout<<"Enter how many Numbers :"<<" "<<endl;
			cin>>size;
			if(size <= 0)
{
    cout << "Invalid size! Please enter a positive number." << endl;
    break;
}
		    vector<double> arr(size);
		    getnumbers(arr.data(),size);
			double result = add(arr.data(), size);
			stringstream ss;
            ss << result;
            history.push_back("Addition = " + ss.str());
			break;
		}
		case 2:
		{
		  int size;
		  cout<<"Enter how many Numbers :"<<" "<<endl;
			cin>>size;
			if(size <= 0)
{
    cout << "Invalid size! Please enter a positive number." << endl;
    break;
}
		  vector<double> arr(size);
		  getnumbers(arr.data(),size);	
	      double result = sub(arr.data(), size);
	      stringstream ss;
          ss << result;
          history.push_back("Subtraction = " + ss.str());
	      break;
	  }
	  case 3:
	  	{
	  		int size;
	  		cout<<"Enter how many Numbers :"<<" "<<endl;
			cin>>size;
			if(size <= 0)
{
    cout << "Invalid size! Please enter a positive number." << endl;
    break;
}
		    vector<double> arr(size);
		    getnumbers(arr.data(),size);
	        double result = mul(arr.data(), size);
	        stringstream ss;
            ss << result;
            history.push_back("Multiplication = " + ss.str());
	        break;
	  		
		  }
		  case 4:
		{
		  int size;
		  cout<<"Enter how many Numbers :"<<" "<<endl;
			cin>>size;
			if(size <= 0)
{
    cout << "Invalid size! Please enter a positive number." << endl;
    break;
}
		    vector<double> arr(size); 	
		  getnumbers(arr.data(),size);		
	      double total = div(arr.data(), size);

if(isnan(total))
{
    cout << "No result available!" << endl;
}
else
{
    cout << "RESULT = " << total << endl;
    stringstream ss;
    ss << total;
    history.push_back("Division = " + ss.str());
}
	      break;
			  }
		case 5:
		{
			break;
			  }	  
			  	default :
			{
				cout<<"Invalid Choice. Please Enter Again"<<endl;
				break;
			  }  
		  	
		      	
	}
}
break;
}
       case 2:
       	{
       			scientificmenu();
    int scientificchoice=0;
    while(scientificchoice!=16)
	{   
		cout<<"ENTER CHOICE :"<<" "<<endl;
	cin>>scientificchoice;
	switch(scientificchoice)
	{
		case 1:
			{
				int size=2;
       		vector<double> arr(size);
       		cout<<"FIRST ENTER BASE THEN ENTER EXPONENT \n"<<endl;
       		getnumbers(arr.data(),size);
			double result = power(arr.data(), size);
            stringstream ss;
            ss << result;
            history.push_back("Power = " + ss.str()); 
			break; 
			}
		case 2:
		{
			int size=1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S SQUARE ROOT \n"<<endl;
			getnumbers(arr.data(),size);
			double result = squareroot(arr.data(), size);

if(isnan(result))
{
    cout << "No result available!" << endl;
}
else
{
    cout << "RESULT = " << result << endl;
     stringstream ss;
    ss << result;
    history.push_back("Square Root = " + ss.str());
}
			break;
			}
		case 3:
		{
			int size=1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S SINE \n"<<endl;
			getnumbers(arr.data(),size);
			double result;
			result=(sine(arr.data(),size));
			cout<<"RESULT = "<<result<<endl;
			stringstream ss;
            ss << result;
            history.push_back("Sine = " + ss.str());
			break;
		}
		case 4:
		{
			int size=1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S COSINE \n"<<endl;
			getnumbers(arr.data(),size);
			double result;
			result=(cosine(arr.data(),size));
			cout<<"RESULT = "<<result<<endl;
			stringstream ss;
            ss << result;
            history.push_back("Cosine = " + ss.str());
			break;
		}
		case 5:
		{
			int size=1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S TANGENT \n"<<endl;
			getnumbers(arr.data(),size);
			double result;
			result=(tangent(arr.data(),size));
			cout<<"RESULT = "<<result<<endl;
			stringstream ss;
            ss << result;
            history.push_back("Tangent = " + ss.str());
			break;
		}	
		case 6:
		{
			int size=1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S INVERSE SINE \n"<<endl;
			getnumbers(arr.data(),size);
			double result = inversesine(arr.data(), size);

if(isnan(result))
{
    cout << "No result available!" << endl;
}
else
{
    cout << "RESULT = " << result << endl;
    stringstream ss;
    ss << result;
    history.push_back("Inverse Sine = " + ss.str());
}
			break;
		}
		case 7:
		{
		    int size=1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S INVERSE COSINE \n"<<endl;
			getnumbers(arr.data(),size);
			double result = inversecosine(arr.data(), size);

if(isnan(result))
{
    cout << "No result available!" << endl;
}
else
{
    cout << "RESULT = " << result << endl;
    stringstream ss;
    ss << result;
    history.push_back("Inverse Cosine = " + ss.str());
}
			break;	
		}
		case 8:
		{
			int size=1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S INVERSE TANGENT \n"<<endl;
			getnumbers(arr.data(),size);
			double result;
			result=(inversetangent(arr.data(),size));
			cout<<"RESULT = "<<result<<endl;
			stringstream ss;
            ss << result;
            history.push_back("Inverse Tangent = " + ss.str());
			break;
		}
		case 9:
		{
		    int size =1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S FACTORIAL \n"<<endl;
			getnumbers(arr.data(),size);
			double result;
			result=(factorial(arr.data(),size));
			cout<<"RESULT = "<<result<<endl;
			stringstream ss;
            ss << result;
            history.push_back("Factorial = " + ss.str());
			break;		
		}
		case 10:
		{
		 int size =2;
			vector<double> arr(size);
			cout<<"FIRST ENTER OBTAINED VALUE THEN ENTER TOTAL TO FIND IT'S PERCENTAGE \n"<<endl;
			getnumbers(arr.data(),size);
			double result;
			result=(percentage(arr.data(),size));
			if(isnan(result))
{
    cout<<"NO RESULT AVAILABLE!"<<endl;
}
else
{
    cout<<"RESULT = "<<result<<"%"<<endl;
    stringstream ss;
    ss << result;
    history.push_back("Percentage = " + ss.str());
}
			break;		           		
		}
		case 11:
			{
			int size =1;
			vector<double> arr(size);
			cout<<"ENTER A DIGIT TO FIND IT'S LOGRATHIM \n"<<endl;
			getnumbers(arr.data(),size);
			double result;
			result=(logarithm(arr.data(),size));
			if(isnan(result))
{
    cout<<"NO RESULT AVAILABLE!"<<endl;
}
else
{
    cout<<"RESULT = "<<result<<endl;
    stringstream ss;
    ss << result;
    history.push_back("Logarithm = " + ss.str()); 
}
			break;		
			}
		case 12:
		{
    int size;
    cout<<"Enter how many Numbers:"<<endl;
    cin>>size;
    if(size<=0)
    {
        cout<<"Invalid size!"<<endl;
        break;
    }
    vector<double> arr(size);
    getnumbers(arr.data(),size);
    double result=average(arr.data(),size);
    stringstream ss;
    ss<<result;
    history.push_back("Average = "+ss.str());
    break;
}	
       case 13:
{
    int size=1;
    vector<double> arr(size);
    getnumbers(arr.data(),size);
    double result=absolute(arr.data(),size);
    stringstream ss;
    ss<<result;
    history.push_back("Absolute = "+ss.str());
    break;
}
         case 14:
{
    int size=1;
    vector<double> arr(size);
    getnumbers(arr.data(),size);
    double result=exponent(arr.data(),size);
    stringstream ss;
    ss<<result;
    history.push_back("Exponent = "+ss.str());
    break;
}
         case 15:
{
    int size=1;
    vector<double> arr(size);
    getnumbers(arr.data(),size);
    double result=cuberoot(arr.data(),size);
    stringstream ss;
    ss<<result;
    history.push_back("Cube Root = "+ss.str());
    break;
}
		case 16:
		{
			break;
			}
			
			default:
{
    cout << "Invalid choice! Please try again." << endl;
    break;
}	
			
	}
		  }  	
		}
		break;
		case 3:
            {
                showhistory();
                break;
            }
        case 4:
{
    history.clear();
    cout << "CALCULATOR HISTORY CLEARED SUCCESSFULLY!" << endl;
    break;
}    
        case 5:
{
    cout<<"EXITING CALCULATOR"<<endl;
    break;
}    
            default:
            {
                cout<<"Invalid Choice!"<<endl;
                break;
            }
}
}
}

