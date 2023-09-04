/*8/28/23
#MGG
#practice with linux enviorment 
#warm up project- n sphere calculate the volume
#creates 3d scatter plot of volume vs (n,R) 
#using c++   */


#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <cmath>



int main(){

  //silly little data file
  FILE *output;
  output=fopen("mgg_nsphere.dat", "w");//write to file


  int n;//(to 50)
  float r; //(to 2)
  float x,v,y;
  


  for (n=0; n<51; ++n){
    printf("%d\n", n);
    y=n/2+1;
    
    x= pow(M_PI, n/2)/ tgamma(y);
    for (r=1; r<2.01;r =r+0.05){
      v= x * pow(r,n);
      printf("%d %f %f\n", n, r, v);//print to screen
	fprintf(output, "%d %f %f\n", n, r, v);//print to file
	}
  }

  fclose(output);
  return 0;

}


  

  
 
