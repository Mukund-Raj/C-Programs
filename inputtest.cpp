#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
main()
{   int N,X,Y,Z;
    cin>>N;
    cin>>X>>Y>>Z;
     /* vector<vector<int> >abcs(N);
      int num;
	 int length; cin >> length;*/
	vector<int> sequence; sequence.reserve(N);
	copy_n(istream_iterator<int>(cin), N, back_inserter(sequence));
	  for(int i=0;i<N;i++)
      {
      	for(int j=0;j<3;j++)
		  {
		  	cout<<abcs[i][j];
		  }
	 }	
	return 0;
}
