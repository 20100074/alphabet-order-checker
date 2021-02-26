#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
	if(argc < 2){
		cout << "argc: " << argc << endl;
		cout << "insufficient argument! exiting." << endl;
		return -1;
	}

	vector<char> l;

	for(int i=0; i<argc-1; i++){
		l.push_back(*argv[i+1]);
	}
	sort(l.begin(), l.end());

	for(int i=0; i<(argc-1); i++){
		if(i==argc-2){
			cout << l.at(i) << endl;
			break;
		}
		cout << l.at(i) << " -> ";
	}

	return 0;
}
