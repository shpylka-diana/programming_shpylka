#define R 2
int main()
{ 
    int a = R * R;  // первая операция(2) 4
    int b = a * a;  // вторая операция (4) 16
    int c = a * b;  // третья операция (6) 64
    int d = b * b;  // третья операция (8) 256
    int e = a * c;  // четвертая операция(10) 1024 

return 0;
}
