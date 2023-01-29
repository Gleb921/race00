void mx_printchar(char c);
void mx_cube(int n) {
	if (n > 1) {
		int rang = n / 2 + 1;
		int first_rang = -1;
		for (int r = 0; r < rang; r++) {
			mx_printchar(' ');
		} 
		mx_printchar('+');
		for (int r = 0; r < n; r++) {
			mx_printchar('-','-');
		} 
		mx_printchar('+');
		mx_printchar('\n');
		for (int r = 0; r < n / 2; r++) {
			rang--;	
			first_rang++;	
			for (int r = 0; r < rang; r++) {	
				mx_printchar(' ');
			}
			mx_printchar('/');
			for (int r = 0; r < n * 2; r++) {
				mx_printchar(' ');
			}
			mx_printchar('/');
			for (int r = 0; r < first_rang; r++) {
				mx_printchar(' ');
			}
			mx_printchar('|');
			mx_printchar('\n');
		}
		first_rang++;
		mx_printchar('+');
		for (int r = 0; r < n; r++) {
			mx_printchar('-','-');
		}
		mx_printchar('+');
		for (int r = 0; r < first_rang; r++) {
			mx_printchar(' ');
		}
		mx_printchar('|');
		mx_printchar('\n');
		if(n % 2 == 0) {
                	for (int r = 0; r < n/2 - 1; r++) {
                		mx_printchar('|');
                		for (int r = 0; r < n*2; r++) {
                    			mx_printchar(' ');
                		}
                		mx_printchar('|');
                		for (int r = 0; r < first_rang; r++) {
                    			mx_printchar(' ');
                		}
                		mx_printchar('|');
                		mx_printchar('\n');
            		}
        	}
        	else {
            		for (int r = 0; r < n / 2; r++) {
                		mx_printchar('|');
                		for (int r = 0; r < n * 2; r++) {
                    			mx_printchar(' ');
                		}
                		mx_printchar('|');
                		for (int r = 0; r < first_rang; r++) {
                    			mx_printchar(' ');
                		}
                		mx_printchar('|');
                		mx_printchar('\n');
            		}
        	}
        	mx_printchar('|');
        	for (int r = 0; r < n * 2; r++) {
            		mx_printchar(' ');
        	}
        	mx_printchar('|');
        	for (int r = 0; r < first_rang; r++) {
            	mx_printchar(' ');
        	}
        	mx_printchar('+');
        	mx_printchar('\n');
        	for (int r = 0; r < n / 2; r++) {
            		first_rang--;  
            		mx_printchar('|');
            		for (int r = 0; r < n * 2; r++) {
              			mx_printchar(' ');
     			}
     			mx_printchar('|');
            		for (int r = 0; r < first_rang; r++) {
                		mx_printchar(' ');
            		}
            		mx_printchar('/');
            		mx_printchar('\n');
        	}
        	mx_printchar('+');
        	for (int r = 0; r < n; r++) {
            		mx_printchar('-','-');
        	}
        	mx_printchar('+');
        	mx_printchar('\n');
    	}
}	
