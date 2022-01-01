string encode(string src)
{     
  //Your code here 
  string ans="";
  for(int i=0;i<src.size();i++){
      int c=0;
      char cc=src[i];
      while(i<src.size() && src[i]==cc)c++,i++;
      i--;
      ans+=cc+to_string(c);
  }
  return ans;
}    
