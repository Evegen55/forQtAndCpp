#include<iostream>
#include<vector>
#include<algorithm>
#include<bystroustrup.h>

using namespace std;

//http://www.stroustrup.com/bs_faq2.html#simple-program
int mainByBS()
{
    //Reading into a standard vector guarantees that you don't overflow some arbitrary buffer
    //A vector knows its size, so I don't have to count elements.
    vector<double> v;
    double d;
    while(cin>>d) v.push_back(d);	// read elements
    if (!cin.eof()) {		// check if input failed
        cin.clear();		// clear error state
        string s;
        cin >> s;		// look for terminator string
        if (s != "end") {
            cerr << "format error\n";
            return 1;	// error return
        }
    }

    cout << "read " << v.size() << " elements\n";

    reverse(v.begin(),v.end());
    cout << "elements in reverse order:\n";

    /*
     * Yes, I know that I could declare i to be a vector<double>::size_type rather than plain int
     * to quiet warnings from some hyper-suspicious compilers,
     * but in this case,I consider that too pedantic and distracting.
     *
    */
    for (int i = 0; i<v.size(); ++i) cout << v[i] << '\n';

    return 0; // success return
}
