/*#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) {
        string S;
        getline(cin, S);
        vector<string> W;
        vector<int> C;
        stringstream ss(S);
        string wo;
        int m_c = 0;
        string r;
        while (ss >> wo) {
            bool found = false;
            for (int i = 0; i < W.size(); i++) {
                if (W[i] == wo) {
                    C[i]++;
                    found = true;
                    if (C[i] > m_c) {
                        m_c = C[i];
                        r = wo;
                    }
                    break;
                }
            }
            if (!found) {
                W.push_back(wo);
                C.push_back(1);
                if (m_c == 0) {
                    m_c = 1;
                    r = wo;
                }
            }
        }
        cout << r << " " << m_c << endl;
    }
    return 0;
}
*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string S;
        getline(cin, S); 
        vector<string> words;
        vector<int> C;
        string word;
        int max_c = 0;
        string res;
        for (int i = 0; i <= S.length(); i++) {
            if (i == S.length() || S[i] == ' ') {
                if (!word.empty()) {
                    bool found = false;
                    for (int j = 0; j < words.size(); j++) {
                        if (words[j] == word) {
                            C[j]++;
                            found = true;
                            if (C[j] > max_c) {
                                max_c = C[j];
                                res = word;
                            }
                            break;
                        }
                    }
            
                    if (!found) {
                        words.push_back(word);
                        C.push_back(1);
                        if (max_c == 0) {
                            max_c = 1;
                            res = word;
                        }
                    }
                    word.clear();
                }
            }
            else {
                word += S[i];
            }
        }

    
    cout << res << " " << max_c << endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;
    cin.ignore();  // To ignore the newline after inputting T
    
    while (T--) {
        string sentence;
        getline(cin, sentence);  // Input the full sentence
        
        string word;
        stringstream ss(sentence);  // Use stringstream to split the sentence into words
        map<string, int> mp;  // Map to store word frequencies
        
        // Process each word and count its frequency
        while (ss >> word) {
            mp[word]++;  // Increase the count for each word in the map
        }
        
        string mostFrequentWord;
        int maxCount = 0;
        
        // Find the word with the maximum frequency
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > maxCount) {
                mostFrequentWord = it->first;
                maxCount = it->second;
            }
        }
        
        // Output the most frequent word and its frequency
        cout << mostFrequentWord << " " << maxCount << endl;
    }

    return 0;
}
