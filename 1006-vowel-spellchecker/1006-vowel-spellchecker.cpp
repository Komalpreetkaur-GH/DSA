class Solution {
public:
    // Convert string to lowercase
    string toLower(string s) {
        for (char &c : s) {
            c = tolower(c);
        }
        return s;
    }

    // Replace vowels with '*'
    string devowel(string s) {
        for (char &c : s) {
            if (isVowel(c)) c = '*';
        }
        return s;
    }

    // Check if character is a vowel
    bool isVowel(char c) {
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact; // for exact matches
        unordered_map<string, string> caseInsensitive; // lowercase -> first word
        unordered_map<string, string> vowelInsensitive; // devowel -> first word

        // Preprocessing
        for (string word : wordlist) {
            exact.insert(word);

            string lower = toLower(word);
            if (!caseInsensitive.count(lower)) {
                caseInsensitive[lower] = word;
            }

            string dev = devowel(lower);
            if (!vowelInsensitive.count(dev)) {
                vowelInsensitive[dev] = word;
            }
        }

        vector<string> res;
        for (string q : queries) {
            if (exact.count(q)) {
                res.push_back(q);
            } 
            else {
                string lowerQ = toLower(q);
                if (caseInsensitive.count(lowerQ)) {
                    res.push_back(caseInsensitive[lowerQ]);
                } 
                else {
                    string devQ = devowel(lowerQ);
                    if (vowelInsensitive.count(devQ)) {
                        res.push_back(vowelInsensitive[devQ]);
                    } 
                    else {
                        res.push_back("");
                    }
                }
            }
        }

        return res;
    }
};
