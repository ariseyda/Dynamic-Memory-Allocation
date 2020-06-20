#include<stdio.h>
#include<stdlib.h>

//Write a program that will find the smallest, largest, and average values in a collection of N numbers. 
//Get the value of N before scanning each value in the collection of N numbers. 

int main(){
	
	//malloc(memory alocation)=It gives a byte of RAM in the size of the value entered.
	//Returns the address of the beginning of the memory it gives.
	
	int i,k,l,m;
	int *p;
	int size=0;
	
	p=malloc(3*sizeof(int));
	
	printf("Enter as many numbers as you want for the N collection. (If you enter '0', the collection ends.)");
	
	 
	    for(i=0;;i++){
	      scanf("%d",&p[i]);
	      if(p[i]==0){
		  break;
		}
		  size++;
	 }
	
		
	p=realloc(p,size*sizeof(int));
	//It takes two parameters. 
        //The first parameter is the pointer you want to change. 
	//The second parameter is the new dimension. Thus, I can reduce or increase the size I first reserve with realloc.
	
	
	int max=p[0];
	int min=p[0];
	
	for(k=1;k<size;k++){
	   if(p[k]<p[0]){
		min=p[k];
	   }
	}
	for(l=1;l<size;l++){
	   if(p[l]>p[0]){
		max=p[l];
	   }
	}
	
	printf("MIN:%d\nMAX:%d\n",min,max);
	
	int sum=0;
	
	for(m=0;m<size;m++){
	    sum+=p[m];
	}
	
	float avrg=sum/(size*1.0);
	
	printf("Average:%.2f",avrg);
	
	free(p);
	
	return 0;
}

