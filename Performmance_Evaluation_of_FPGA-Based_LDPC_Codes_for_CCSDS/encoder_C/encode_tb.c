#include "encode.h"
 
int main () {


	int i ;
	in u[N] = {1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,0,1,0,0,1,0,1,0,1,1,0,0,0,0,0,0,1,0,1,0,1,0,1,1,0,0,1,1,0,1,0,1,1,0,1,1,1,1,1,0,0,0,1,1,1,0,1,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,0,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,1,0,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,0,0,1,1,0,0,1,1,0,0,1,0,0,0,0,1,1,0,1,1,1,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,1,1,1,0,0,0,1,1,0,0,0,0,1,0,0,0,1,1,0,1,0,1,1,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,1,1,1,0,1,0,0,1,0,0,1,1,1,1,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,1,0,0,0,1,1,1,0,1,0,0,1,0,1,1,1,1,0,1,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,1,0,0,1,0,0,0,1,0,0,0,0,1,0,1,1,0,1,1,0,1,0,1,0,0,1,0,1,0,0,0,1,0,0,1,0,0,1,1,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,1,1,0,0,0,0,1,0,1,0,1,0,0,0,1,1,0,1,0,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,0,0,1,1,1,1,0,1,0,0,0,1,0,0,1,1,1,1,0,1,1,1,0,1,1,0,1,0,1,0,0,0,0,0,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,1,0,0,1,0,1,1,1,1,1,1,0,0,1,1,0,1,0,1,1,0,0,0,0,0,1,0,1,1,1,0,1,0,1,0,0,0,1,0,0,1,0,1,0,1,0,1,1,1,1,0,1,1,1,0,0,0,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,0,0,0,0,0,1,1,0,0,1,1,1,1,1,0,1,0,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,0,1,0,0,0,0,0,1,1,1,0,1,1,1,0,0,1,1,0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,1,0,0,1,1,0,0,0,0,1,1,1,0,0,0,1,0,1,1,0,1,0,0,1,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,0,1,0,1,0,0,1,1,0,1,1,1,0,0,1,0,0,1,1,1,1,0,0,0,0,1,1,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,0,0,0,1,1,1,0,0,1,0,1,1,0,1,1,1,1,1,1,1,1,0,0,1,1,0,1,1,1,0,1,1,1,1,0,1,0,0,1,1,1,0,1,0,1,1,1,0,0,0,1,1,1,1,1,0,1,0,0,1,1,1,0,1,1,0,0,0,1,0,1,1,0,0,1,1,1,1,0,0,1,1,1,0,1,0,0,0,1,0,0,0,0,1,1,0,0,1,1,1,1,0,1,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,1,0,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,0,1,1,0,1,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,1,0,0,0,0,0,1,1,1,1,0,1,0,1,0,1,0,1,1,1,1,1,0,0,1,1,1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,0};

	in cw[M];

	encode(u,cw);
	for (i=0;i<M;i++) {
	    printf("codeword[%d]=%d  \n",i, cw[i]);
		}


}
