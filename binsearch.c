int binsearch(char dates[]/*array of all dates*/, char find/*string*/)
int start = 0; //the starting index of the part we're interested in
int end = sizeof(dates)/sizeof(dates[0]);//the end of the part we're interested in

while(I have more than 1 thing to look at) {
	int middle = (end - start) / 2 + start;
	if(dates[middle]<search) {
		move up the starting index;
	}
	else { //I care about the later dates
		move down the ending index;
	}
}
