ll t;
    cin>>t;
    while(t--)
    {
       ll n,table;
       cin>>n>>table;
       ll a[n];
       ll i=0,j=0;
        set<ll>s1,s2;
       for(i=0;i<n;i++)
       {
       cin>>a[i];
       //s2.insert(a[i]);
       }
       vector<ll> vec1;
       vector<ll> vecin;
       ll temp =0;
       for(i=0;i<n;i++)
       {
           vec1.push_back(a[i]);
           if(i==0)
           vecin.push_back(i);
           
            temp = check(vec1);
          //  cout<<temp<<"temp"<<endl;
            if(temp==2)
            {
               vec1.clear();
               vec1.push_back(a[i]);
               vecin.push_back(i-1);
               
            }
       }
       vecin.push_back(n-1);
       /*for(j=0;j<vecin.size();j++)
       {
           cout<<vecin[j]<<" ";
           
       }
       cout<<endl;
      */
      ll cost=0;
      vector<ll> vec2;
      ll k=0;
      ll past=0;
      for(i=0;i<vecin.size()-1;i++)
      {
          ll t1=0,t2=0,t3=0,flag=0;
          if((vecin[i+1]-vecin[i])==1)
          {
          t1 = vecin[i];
          t3 = vecin[i+1];
          flag=1;
          }
          else
          {
              t1 = vecin[i];
              if(i+2>(n-1))
              break;
              t3 = vecin[i+2];
              cout<<"hllo"<<vecin[i]<<vecin[i+2]<<endl;
              i++;
              //cout<<"hell0"<<i<<i+2<<endl;
             
          }
          
        
          if(i==0)
          {
          for(k=t1;k<=t3;k++)
          {
              vec2.push_back(a[k]);
          }
          for(ll g=0;g<vec2.size();g++)
          cout<<vec2[g]<<" ";
          cout<<endl;
           ll temp3 = findSame(vec2);
           past = temp3;
              vec2.clear();
              if((temp3+table)<2*table)
              {
                  ll h=0;
                  for(h=0;h<vecin.size();h++)
                  vecin[i+1] =vecin[i+2];
                  cost = cost+ temp3+table;
                  
                  
              }
              else
              {
                  cost = cost + 2*table;
              }
          }
          else
          {
               if(flag)
               t1 = t1-1;
          for(k=t1+1;k<=t3;k++){
              vec2.push_back(a[k]);
          }
            for(ll g=0;g<vec2.size();g++)
          cout<<vec2[g]<<" ";
          cout<<endl;
          ll temp3 = findSame(vec2);
          vec2.clear();
              if((temp3+table)<2*table)
              {
                  ll h=0;
                  for(h=0;h<vecin.size();h++)
                  vecin[i+1] =vecin[i+2];
                  cost = cost+(temp3-past);
                  past = temp3;
                  
              }
              else
              {
                  cost = cost + table;
              }
      }
      }
      cout<<cost<<endl;
   
