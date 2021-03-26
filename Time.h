struct Time{
	int m,h,s;
};


//	Write function to getTime;
void getTime(struct Time &x){
  do{
  cout << endl << "Hour : ";
  cin >> x.h;
  }
  while(x.h >= 24);

  do{
  cout << endl << "Min : ";
  cin >> x.m;
  }
  while(x.m >= 60);
     

  do{
  cout << endl << "Sec : ";
  cin >> x.s;
  }
  while(x.s >= 60);
  
}
//	Write function to subtract;
struct Time subtract(struct Time &t1 , struct Time &t2){
  struct Time t3;
  
  if(t2.s < t1.s){
    t2.s += 60;
    t2.m --;
  }
  t3.s = t2.s - t1.s;

  if(t2.m < t1.m){
    t2.m += 60;
    t2.h --;
  }
  t3.m = t2.m - t1.m;
    
  if(t2.h < t1.h){
    t3.h += 24;
  }
  t3.h += (t2.h - t1.h);
  

  return t3;
}