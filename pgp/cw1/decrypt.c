#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void decrypt(char* message, char* password)
{
	int m = 0, p = 0;
	while (message[m]) // Until end of string
	{
		message[m] = 65 + (50 + (message[m] & 0x9F) - (password[p] & 0x9F)) % 26;
		m++;
		p++;
		if (password[p] == 0) // End of string
			p = 0;
	}
}

int main(int argc, char* argv[])
{
	if (argc < 3) // Not enough command line arguments
	{
		printf("Usage: %s <word> <password>", argv[0]); // You can hardcode name
		printf("Cannot decrypt without supplying both a word and a password!");
		return 1; // Failure
	}

	// Create a copy of the word which we can actually modify
	char* copyOfWord = (char*)malloc(strlen(argv[1] + 1));
	// Note: need to use new not malloc in java to create a new object
	// Copy input word into our editable buffer
	strcpy(copyOfWord, argv[1]);
	// Decrypt the word
	decrypt(copyOfWord/*Word to change*/, argv[2]/*Password*/);
	// Output the word
	printf("Decrypted word is: '%s'\n", copyOfWord);
	// Java will do this for you - no need
	free(copyOfWord);
	// Success
	return 0;
}
