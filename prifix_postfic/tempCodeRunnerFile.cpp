
    for(int i =s.length()-1; i>=0; i--){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }else{
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }    
        cout<<val.top()<<endl;
}