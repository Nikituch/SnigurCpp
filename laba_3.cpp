#include <iostream>
#include <string>
using namespace std;
	enum Error{
		ex1,
		ex2,
		ex3
	};
	
	void printInfo(int ex)
	{
		switch (ex)
		{
		case 1:
			cout << "�� ����������, ��������� �� ��� asd... "<< endl; 
			break;
		default:
			cout << "�� ����������, ��������� �� ��� sdf ... " << endl;
			break;
		}	
	}
	
	int foomassp(int* arr){
		int p = 0;
		
    	for (int i = 0; i < 10; i++) {
        	if (*(arr+i)%2 == 0) 
            	p++;
    	}
    	
    	return p;
    	
	}
	
		int foomassnp(int* arr){
		int np = 0;
		
    	for (int i = 0; i < 10; i++) {
        	if (*(arr+i)%2 != 0) 
            	np++;
    	}
    	
    	return np;
    	
	}

	int main(){
		
		setlocale(LC_ALL, "Russian");
		Error last = ex1;
		int error = last;
		int exit = 1;
		int arr[10] ;
		int a = 0;
		
		while(exit){
			cout<<"����i�� �������� ������ (�i�i�����)"<<endl;
				
				for(int i = 0; i<10; i++){
					cout<<i+1<<") = ";
					cin >> arr[i];
						
					while (!(cin.good())){
						error = 1;        
        				printInfo(error);
						cout<<i+1<<") ";       
        				cin.clear();                
        				fflush(stdin);            
    				}
    				
    			}
    			
    			cout<<"������ �������i� - "<< foomassp(arr) <<endl;
    			cout<<"�������� �������i� - "<< foomassnp(arr) <<endl;
    			
				if(foomassp(arr)>foomassnp(arr)){
					cout<<"������ �������i� �i����"<<endl;
				}else if(foomassp(arr) == foomassnp(arr)){
					cout<<"�i���i���  �������i� ��������"<<endl;
				}else
					cout<<"�������� �������i� �i����"<<endl;
				
    			
			cout<<"���� �� ������ ����������  ������i�� - 1 "<<endl;
			cout<<"���� �� ������ ����� ������i�� - 0 "<<endl;
		
			while (!(cin >> exit)){  

        	cout <<"�� ����������, ��������� �� ��� " << endl;
			cout<<"��� �����������  ������i�� - 1 "<<endl;
			cout<<"���� �� ������ ����� ������i�� - 0 "<<endl;          
        	cin.clear();                
        	fflush(stdin); 
			
    		}					
		}	
		system("pause");
		return 0;
	}
