#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the missingNumbers function below.
vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    int ele;
    vector<int>ans(0);
    //sort both the vectors for find() and upper_bound()
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    
    //check each element of arr in brr
    //if not equal amount then push that element into ans vector
    while(!arr.empty())
    {
        //first element of the vector
        ele=arr.front();
    
    //finding the first occurence of the element
    auto a=find(arr.begin(),arr.end(),ele);
    //getting the position of first occurence of element
    int starta=a-arr.begin();
    
    //finding the last position+1 of the element
    auto b=upper_bound(arr.begin(),arr.end(),ele);
    //getting position of last occurence of element 
    int enda=b-arr.begin();
    //getting how many times element occur by minus first position -last position
    int totala=b-a;
    //now deleting the element(s)in the vector
    arr.erase(arr.begin()+starta,arr.begin()+enda);
    arr.shrink_to_fit(); //redundant maybe memory efficient
    
    //finding the first occurence of the element
    a=find(brr.begin(),brr.end(),ele);
    //getting the position of first occurence of element
    int startb=a-brr.begin();
    //finding the last position+1 of the element
    b=upper_bound(brr.begin(),brr.end(),ele);
    //getting position of last occurence of element 
    int endb=b-brr.begin();
    //getting how many times element occur by minus first position -last position
    int totalb=b-a;
    
    if(a!=brr.end())//now deleting the element(s)in the vector
    brr.erase(brr.begin()+startb,brr.begin()+endb);
    
    brr.shrink_to_fit(); //redundant maybe memory efficient
    //now checking the diff between element frequency in two vectors  
    if(totala!=totalb)
    {
        //taking absolute diff
        int d=abs(totala-totalb);
        while(d--)
        {
            ans.push_back(ele);//pushing unfound element in the ans vector
        }    
    }
    }
    
    //pushing the left elements of b in ans
    for(int i=0;i<brr.size();i++)
    {
        ans.push_back(brr[i]);        
    }
    //sorting the ans vectorfor the answer purposes
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split_string(brr_temp_temp);

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    vector<int> result = missingNumbers(arr, brr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

