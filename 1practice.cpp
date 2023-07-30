#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int inputAndOutput() {
    int a = 0,b = 0,c = 0,ans = 0;
    cin >> a >> b >> c;
    ans = a + b + c;
    cout << ans << endl;
      
    return 0;
}

string conditionalStatements(){
	int val = 0;
	 
	 vector<string> cases = {"one", "two", "three","four", "five", "six", "seven", "eight","nine"};
	 
	 cin >> val;
	 string word;
	 if( val <= 9){
	   cout <<cases[val -1]<< endl;
	   }
	 
	 else if(val > 9){
	      cout << "Greater than 9" << endl;
	 }
	 

    return 0;
}

string forLoop() {
    vector<string> cases = {"one", "two", "three","four", "five", "six", "seven", "eight","nine"};
     
    int n, a , b, sum = 0;
    
    cin >> a >> b;
    for(n = a; n<= b; n++){
        sum = n%2;
        
        if(n <= 9){
        cout << cases[n-1]<< endl;
        }
        else if(sum == 0 ){
            cout << "even" << endl;
        }
        
        else if(sum != 0){
           cout << "odd" << endl;
        }
        
    }
    return 0;
}


int max_of_four(int a,int b,int c,int d){
        int max;
        if(a > max){
            max = a;
        }
        
        if(b > max){
            max = b;
        }
        
        if(c > max){
            max = c;
        }
        
        if(d > max){
            max = d;
        }
        
        return max;
    }
    
int arrayIntroduccion() {
    
    stack <int> nums;
    int size;
    cin >> size;
    for(int i= 0; i < size; i++){
        int num ;
        cin >> num;
        nums.push(num);
        
    }
    
    while(not nums.empty()){
        cout<< nums.top() << " ";
        nums.pop();
    }
    
    
         
    return 0;
}


string string() {
    
	int a,b;
    string stringA, stringB;
    char la,lb;
    cin >> stringA >> stringB;
    a = stringA.size();
    b = stringB.size();
    la = stringA[0];
    lb = stringB[0];
    
    cout << a << " "<< b << endl;
    cout << stringA + stringB << endl;
    
    stringA[0] = lb;
    stringB[0] = la;
    
    cout << stringA << " " << stringB<< endl;
    
    
    
  
    return 0;
}



class Student{
    public:
    
    int edad;
    int standard;
    string first_name;
    string last_name;
    void set_age(int age){
        edad = age;
    }
    void set_first_name(string name){
        first_name = name;
    }
    
    void set_last_name(string last){
        last_name= last;
    }
    
    void set_standard(int val){
        standard= val;
    }
    int get_age(){
        return edad;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    
    string to_string(){
        string ans, age = "", stand ="";
        char dig1, dig2, dig3, dig4;
        
    
        if(edad > 9){
            int p = edad % 10;
            int s = edad/10;
            dig1 = s + '0';
            dig2 = p + '0';
            age += dig1;
            age += dig2;
            
            
        }
        else{
        age = edad + '0';
        }
        if(standard > 9){
            int c = standard % 10;
            int f = standard/10;
            dig4 = c + '0';
            dig3 = f + '0';
            stand += dig3;
            stand += dig4;
        }
        else{
        stand = standard + '0';
        }
        
        ans = age + "," + first_name + "," + last_name + ","+ stand;
        
        return ans;    
    }
};

class Student{
    int scores [5];
    
    public:
    void input(){
        for(int i = 0; i < 5; i++){
            cin >> scores[i];
        }
    }
    
    int calculateTotalScore(){
        int ans= 0;
        for(int i=0; i< 5; i++){
            ans += scores[i];
        }
        return ans;
    }
};

