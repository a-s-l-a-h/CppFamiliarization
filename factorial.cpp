#include<iostream>
int main(){
	int x,fact=1;
	
	std::cin>>x;
	if(x==0){
		std::cout<<"the factorial is = "<<fact;
		return 0;
	}
	for(int i=1;i<=x;i++){
		fact = fact*i;
	}
	std::cout<<" the factorial is = "<<fact;
	return 0;
}
