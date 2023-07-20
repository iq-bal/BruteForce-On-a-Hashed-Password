#include <iostream>
#include <iomanip>
#include<string.h>
#include<string>
#include<cstring>
#include<sstream>
#include<random>
#include <openssl/sha.h>

using namespace std;

const string TARGET = "538d7d9fe78e7baac47a9fbd6f2c68845ecca72dbdc2b47b4c5a0f5620ab8e93"; 

string sha256(const string& input) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.length(), hash);
    stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << hex << setw(2) << setfill('0') << static_cast<int>(hash[i]);
    }
    return ss.str();
}

void random_print(){
    random_device rd;
    mt19937 gen(rd()); 
    int lowerBound = 33;
    int upperBound = 127;
    uniform_int_distribution<int> dist(lowerBound, upperBound);
    char randomNumber = dist(gen);
    cout<< randomNumber; 
}

int main()
{
    string word;
    for (char c0 = 'a'; c0 <= 'z'; c0++)
        for (char c1 = 'a'; c1 <= 'z'; c1++)
            for (char c2 = 'a'; c2 <= 'z'; c2++)
                for (char c3 = 'a'; c3 <= 'z'; c3++)
                    for (char c4 = 'a'; c4 <= 'z'; c4++)
                    {
                        word.push_back(c0);
                        word.push_back(c1);
                        word.push_back(c2);
                        word.push_back(c3);
                        word.push_back(c4); 
                        if(TARGET==sha256(word)){
                            cout<< endl; 
                            cout<<"------------------------------------------------------------------------------------------------------"<<endl; 
                            cout<< "FOUND IT!" << endl;
                            cout<< word << endl; 
                            exit(1); 
                        }
                        random_print(); 
                        word.clear(); 
                    }
    return 0;
}
