#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	srand(time(NULL));
	int x;
	
	scanf("%i", &x);		// & si usa perché è un puntatore
	if(x >= 1 && x <= 30){
		printf ("%d", 2 * x);
	}else{
		return 0;
	}
	
	
	return 0;
}
