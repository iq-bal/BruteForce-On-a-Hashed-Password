brtuteforce: run_command

run_command:
	g++ -o bruteforce bruteforce.cpp -I/opt/homebrew/opt/openssl@3/include -L/opt/homebrew/opt/openssl@3/lib -lssl -lcrypto