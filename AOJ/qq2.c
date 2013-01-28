main(i){
	for(i=0;i<81;i++){
		printf("%dx%d=%d\n",i,(i+1)%10,(i/9)*(i++%9+1));
	}
}
