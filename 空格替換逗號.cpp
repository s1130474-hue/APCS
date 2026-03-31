int main() {
	string s ="happy,newyear,enjoy";
	for (int i = 0; i < s.size(); i++){
		if (s[i] == ','){
			s[i] = ' ';
		}
	}
	cout << s << endl;
	return 0;
}
