void mx_printchar(char c);
void mx_pyramid(int n)
{
    if (n > 1 && n % 2 == 0) {
        int rang = n - 1;
        int first_rang = 1;
        int second_rang = 0;
        int last_rang = (n * 2) - 3;
        for (int r = 0; r < rang; r++) {
            mx_printchar(' ');
        }   
        
        mx_printchar('/');
        mx_printchar('\\');
        mx_printchar('\n');
        for (int r = 0; r < (n / 2) - 1; r++) {
            rang--;
            second_rang++;
            for (int r = 0; r < rang; r++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int r = 0; r < first_rang; r++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            for (int r = 0; r < second_rang; r++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            mx_printchar('\n');
            first_rang += 2;
        }
        for (int r = 0; r < (n / 2) - 1; r++) { 
            rang--;
            for (int r = 0; r < rang; r++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int r = 0; r < first_rang; r++) {
                mx_printchar(' ');
            }
            mx_printchar('\\');
            for (int r = 0; r < rang; r++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            mx_printchar('\n');
            first_rang += 2;
        }
        mx_printchar('/');
        for (int r = 0; r < last_rang; r++) {
            mx_printchar('_');
        }
        mx_printchar('\\');
        mx_printchar('|');
        mx_printchar('\n');
    }
}
