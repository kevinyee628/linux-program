void urand(int *a,int){
	int i;
	srand(time(0));
	for(i=0;i<n;i++)
		*a++=rand();
}
