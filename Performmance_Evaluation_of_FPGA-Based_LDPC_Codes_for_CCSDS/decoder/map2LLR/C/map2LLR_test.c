
#include "map2LLR.h"
 #include <stdbool.h>
#include <math.h>



int main () {




  din_t Lch_Q[len_input] = {1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3,1,1,1,3,3,3,3,3};


  dout_t Lvn[len_Data];
	int i ;



	// Call the function to operate on the data
	map2LLR(Lch_Q,Lvn);

	// Save the results to a file


	for (i=0;i<len_Data;i++) {
    fprintf(stdout,"Data =  %d\n", Lvn[i]);
	}

}
