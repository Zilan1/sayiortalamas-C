#include <stdio.h>
#include <stdlib.h>

float ortalama(int a);

int main(){
	
	int b;
	
	cout <<"kac sayi girilecek"<<endl;
	cin>>b;
	
	cout <<fixed<<setprecision(5);
	
	cout <<"sayilarin ortalamasi  "<<ortalama(b);
	
}
	
    float ortalama (int a){
    	
        float toplama=0;
		float sayi;
		
		for(int i=0;i<a;i;i++){
			cout<<"sayi gir"<<endl;
			cin>>sayi;
			
			toplam++sayi;	
		}
    	
		}
	
	
	
	return toplam/a;
}
