#include <stdio.h>
#include <stdlib.h>
/*
TODO: Caesar Cipher Algorithm:
* The Caesar Cipher is a simple substitution cipher where each letter in the plaintext
* is shifted a certain number of positions down or up the alphabet. It is one of the
* oldest and simplest encryption techniques.
! Encryption Process:
? 1. Iterate through each character in the input text.
? 2. For each uppercase letter, shift it by 'key' positions to the right (wrapping around
?    the alphabet if needed) to get the corresponding encrypted letter.
? 3. For each lowercase letter, shift it by 'key' positions to the right (wrapping around
?    the alphabet if needed) to get the corresponding encrypted letter.
? 4. Replace each character in the input text with its encrypted counterpart.

! Decryption Process:
* Decryption in the Caesar Cipher is done by encrypting the ciphertext with the negative
* value of the 'key'. This reverses the encryption process and recovers the original
* plaintext.

! Note: The implementation in this code assumes that the input text contains only
! alphabetic characters (both uppercase and lowercase) and does not modify any other
! characters like digits or punctuation. Additionally, this implementation uses a fixed
! key of 17 for both encryption and decryption, which is not secure for real-world
! encryption purposes. In practice, a more complex encryption scheme and a variable,
! secret key should be used for enhanced security.
*/

// Function prototypes
void caesarEncryption(char *text, int key);
void caesarDecryption(char *text, int key);

int main()
{
    system("clear");
    printf("\t\t*****************************************************************\n");
    printf("\t\t*\t\tCesar Cipher Encryption Algorithm\t\t*\n");
    printf("\t\t*****************************************************************\n\n");
    char message[251];
    int key = 17;
    // Input the message from the user
    printf("Enter your message: ");
    scanf("%[^\n]", message);

    // Encrypt the message using the Caesar Cipher
    caesarEncryption(message, key);
    printf("\n\nThis message is encrypted: \"%s\"\n", message);

    printf("\n\nPress any key to decrypt this message. . .");
    getchar();
    getchar();

    // Decrypt the encrypted message using the Caesar Cipher
    caesarDecryption(message, key);
    printf("\n\nThis encrypted message is: \"%s\"\n", message);
    printf("\n\nPress any key to exit. . .");
    getchar();
    return 0;
}

// Function to perform Caesar Cipher encryption
void caesarEncryption(char *text, int key)
{
    char ch;
    int i = 0;
    while (text[i] != '\0')
    {
        ch = text[i];
        // For uppercase letters
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A') + key) % 26 + 'A';
            // Shift the letter by the key positions
        }
        // For lowercase letters
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a') + key) % 26 + 'a';
            // Shift the letter by the key positions
        }
        text[i] = ch;
        // Update the character in the text with the encrypted one
        i++;
    }
}

// Function to perform Caesar Cipher decryption (by encrypting with the negative key)
void caesarDecryption(char *text, int key)
{
    char ch;
    int i = 0;
    while (text[i] != '\0')
    {
        ch = text[i];
        // For uppercase letters
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A') - key + 26) % 26 + 'A';
            // Add 26 before taking the modulus to handle negative values
        }
        // For lowercase letters
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a') - key + 26) % 26 + 'a';
            // Add 26 before taking the modulus to handle negative values
        }
        text[i] = ch;
        i++;
    }
}
