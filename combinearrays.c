void numarrayscombine(double ray1, double ray2, double ray3, double rayfinal){
  int i;
  int j;
  int k=0;
  
  j = sizeof(ray1)/sizeof(ray1[0]);
  
  for(i=0,i<j,i++){
    rayfinal[k] = ray1[i];
    k++
  }
  j = sizeof(ray2)/sizeof(ray2[0]);
  
  for(i=0,i<j,i++){
    rayfinal[k] = ray2[i];
    k++
  }
  j = sizeof(ray3)/sizeof(ray3[0]);
  
   for(i=0,i<j,i++){
    rayfinal[k] = ray3[i];
    k++
  }
  return;
}
