int main()
{
	char text[] = "I love eat"; // Введенный текст
	int space = 0; // количество пробелов в тексте
	
	int size = sizeof(text) / sizeof(text[0]); // еоличество символов в массиве
	
	for (int i = 0; i < size; i++) { // считаем общее количество пробелов
		if (text[i] == ' ' || text[i] == '\0') {
			space += 1;
		}
	}
	
	int dblspace = 0; // количество двойных пробелов в массиве
	
	for (int i = 0; i <= size; i++) { // считаем общее количество двойных пробелов в массиве
		if ((text[i] == ' ' && text[i+1] == ' ') || (text[i] == ' ' && text[i+1] == '\0')) {
			dblspace += 1;
		}
	} 
	
	int amountOfWords = 0; // счетчик слов в массиве
	amountOfWords = space - dblspace;
	
	return 0;
}

