#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

 using namespace std;
 	enum Error{
 		ex1,
 		ex2
	};
	
// �������� ������ � �������
	void printInfo(int ex)
	{
 		switch (ex)
 		{
 		case 1:
			cout << "�� ����������, ����i�� ���� ���� �i�� ����� ... "<< endl; 
 			break;
 		case 2:
 			cout <<"�� ����������, ��������� �� ��� " << endl;
			cout<<"��� �����������  ������i�� - 1 "<<endl;
			cout<<"���� �� ������ ����� ������i�� - 2 "<<endl; 
			break;
 		default:
			cout << "�� ����������, ��������� �� ��� ... " << endl;
 			break;
 		}	
 	}
 	
//������ ������ ��������� ������
 	int foomassp(int* arr){
 		int p = 0;
 		

    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 == 0) 
             	p++;
     	}
		return p;
     	
 		}
//������ �������� ��������� ������
 		int foomassnp(int* arr){
 		int np = 0;
 		
    	for (int i = 0; i < 20; i++) {
         	if (*(arr+i)%2 != 0) 
             	np++;
     	}

     	return np;
     	
 		}
//�������� �� ����(������ �����)
		 int GetInt(){
   			int k, n = 0, flgS = 0, c = 0, q = 0;
 
    			while (1)
   			{
 
        			k = getch();
 
        			if ((k == '-') && (c == 0) && (flgS == 0)) 
       			{
          			flgS = -1;
          			putch('-');
          			c++;
       			}
 
       			if ((k >= '0') && (k <= '9')) 
       			{
           			printf("%c",k);
           			n = n*10 + k-'0';
           			c++;
           			q++;
       			}
     
       			if (k == 8)
       			{
           			putch(8);
           			putch(' ');
           			putch(8);
           			n = n / 10;
           			q--;
           			if (q < 0) q=0;
           			c--;
           			if (c == 0) flgS=0;
       			}
 
       			if ((k == 13) && (c != 0) && (q != 0)) break;
 
    		}
 
    			if (flgS == -1) n = -n;
    	return n;
		}

			
			void fooCheckMass(int p, int np){
				
				cout<<"������ �������i� - "<< p <<endl;
    			cout<<"�������� �������i� - "<< np <<endl;
    			
				if(p>np){
					
					cout<<"������ �������i� �i����"<<endl;
					
				}else if(p == np){
					
					cout<<"�i���i���  �������i� ��������"<<endl;
					
				}else
				
					cout<<"�������� �������i� �i����"<<endl;
			}
		
		
 
 	int main(){
 		
 		setlocale(LC_ALL, "Russian");
 		Error last = ex1;
 		int error = last;
		bool exit = true, isd = true;
		int arr[20] ;
		
 		while(exit){
			cout<<endl;
 			cout<<"����i�� �������� ������ (�i�i�����)"<<endl;
 				
				for(int i = 0; i<20; i++){
					
 					cout<<i+1<<") = ";
					*(arr+i) = GetInt();
					cout<<endl;	
     			}
     			

    			fooCheckMass(foomassp(arr),foomassnp(arr));		
     			
 			cout<<"���� �� ������ ����������  ������i�� - 1 "<<endl;
 			cout<<"���� �� ������ ����� ������i�� - 2 "<<endl;
 		

			while(1){
				int ex ;
				ex = GetInt();
				if( ex == 1){
					exit = true;
					break;
				}else if(ex == 2){
					exit = false;
					break;
				}else{
					cout<<endl;
					error = 2;
					printInfo(error);
				}
					
					
        	} 		    	     								
    							
 		}
		 cout<<endl;	
 		system("pause");
 		return 0;
 }
