double getmedian(double rayx[]) {
    double temp;
    int i;
    int j;
    int k;
    
    k =sizeof(rayx)/sizeof(rayx[0]);
    // the following two loops sort the array x in ascending order
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(rayx[j] < rayx[i]) {
                // swap elements
                temp = rayx[i];
                rayx[i] = rayx[j];
                rayx[j] = temp;
            }
        }
    }
