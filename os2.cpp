#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	float pagefault_empty=8*pow(10,-3);
	float pagefault_modified=20*pow(10,-3);
	float MAT=100*pow(10,-9);
	float modified_time=0.70;
	float MApagefault=200*pow(10,-9);
	float pagefault_rate;
	/*formula for efficient acceptable time is  
        EAT<=(1-p)Memory_access_time + p(page_fault_service time)
        page fault service time=(replaced modified time*time to service a page fault when page is modified)+
		                        ((1-replaced modified time)*time to service a page fault whenpage is empty)*/
	float page_fault_service time=modified_time*pagefault_modified+(1-modified_time)*pagefault_empty;
	pagefault_rate=(MApagefault-MAT)/(page_fault_service_time-MAT);
	cout<<" Maximum accaepatble page fault_rate rate is "<<pagefault_rate;
	
}
