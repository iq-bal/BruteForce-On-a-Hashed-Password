# Brute Force Password Cracking with SHA3 Hash

## Introduction

This C++ program demonstrates a brute force attack on a hashed password encrypted using SHA3, which is a cryptographic hash function known for its irreversibility and extremely low collision rate. Brute force attacks involve trying all possible combinations of characters until the correct password is found. However, due to the high computational complexity involved in reversing SHA3, the time required to crack a strong password is practically unfeasible.

## Disclaimer

The purpose of this code is purely educational and intended to showcase the strength of cryptographic hash functions and the importance of using strong passwords. Unauthorized attempts to crack passwords are illegal and unethical. Always respect the privacy and security of others.

## Program Details

The program is designed to crack a simple 5-digit password composed of only alphabetical characters (lowercase and uppercase). The search space for such a password is 11 million possible words, which makes it crackable within seconds or minutes through brute force.

## Requirements

To run the program, you need to have `openssl` installed and properly configured in your environment. The OpenSSL library is utilized to generate SHA3 hashes for each permutation of characters in the password search space.

## Running the Program

1. Ensure you have OpenSSL installed and configured.

2. Compile the C++ program using the provided Makefile.

3. Execute the compiled binary to initiate the brute force attack.

## Recommendations

The program serves as a reminder of the vulnerabilities of weak passwords and the importance of using strong and complex passwords. To enhance the security of your accounts and data, follow these recommendations:

1. **Use Strong Passwords**: Create passwords that include a mix of special characters, numbers, uppercase and lowercase letters. Avoid using easily guessable information such as birthdates or common words.

2. **Password Managers**: Consider using a reputable password manager to generate, store, and manage complex passwords for different accounts.

3. **Multi-Factor Authentication (MFA)**: Enable MFA whenever possible to add an extra layer of security to your accounts.

4. **Regularly Update Passwords**: Periodically change passwords for critical accounts, especially in the event of a security breach.

5. **Stay Informed**: Keep yourself updated on the latest security best practices and trends in password protection.

Remember, strong password practices are essential for safeguarding your personal information and digital assets from unauthorized access.

## Disclaimer

The author and the affiliated institution are not responsible for any misuse of the code or its implementation. The code is provided for educational purposes only. Unauthorized access to computer systems or accounts is illegal and can lead to severe consequences.

## About the Author

Name: Iqbal Mahamud  
Institution: Khulna University of Engineering & Technology (KUET)  
Department: Computer Science & Engineering (CSE)  
Batch: 2k20

For any inquiries or feedback, feel free to reach out to the author via email: moon2007093@stud.kuet.ac.bd
