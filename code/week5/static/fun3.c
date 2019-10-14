int* userrand(){
	int i;
	static int a[10];
	srand((int)time(0));
	for(i=0;i<10;i++)
		a[i]=rand();		
	return a;
}
